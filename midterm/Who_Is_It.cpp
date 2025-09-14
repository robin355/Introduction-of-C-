#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    int id; 
    string name;
    char section;
    int marks;
    student(int id,string name,char section,int marks)
    {
        this->id=id;
        this->name=name;
        this->section=section;
        this->marks=marks;
    } 

};
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    int id1,id2,id3; 
    string name1,name2,name3;
    char section1,section2,section3;
    int marks1,marks2,marks3;
    cin>>id1>>name1>>section1>>marks1;

    student s1(id1,name1,section1,marks1);
    cin>>id2>>name2>>section2>>marks2;
    student s2(id2,name2,section2,marks2);
    cin>>id3>>name3>>section3>>marks3;
    student s3(id3,name3,section3,marks3);
  
     student maxMark = s1;
        if (s2.marks > maxMark.marks || (s2.marks == maxMark.marks && s2.id < maxMark.id)) {
            maxMark = s2;
        }
        if (s3.marks > maxMark.marks || (s3.marks == maxMark.marks && s3.id < maxMark.id)) {
            maxMark = s3;
        }
        cout << maxMark.id << ' ' << maxMark.name << ' ' << maxMark.section << ' ' << maxMark.marks << endl;
    }

    return 0;
} 
