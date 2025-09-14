#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
   string name;
	int roll;
	string section;
	double math_marks;
	string cls;
    Student(string n,int r,string s,double mathMark,string c)
    {
       name=n;
       roll=r;
       section=s;
       math_marks=mathMark;
       cls=c;
    }
    


};

int main()
{
    // string n,s;
    string n,s,c;
    int r;
    double mathMark;
    getline(cin,n);
    cin.ignore();
    cin>>r;
    getline(cin,s);
    cin.ignore();
    cin>>mathMark;
    getline(cin,c); 
    Student s1(n,r,s,mathMark,c);
    Student s2(n,r,s,mathMark,c);
    cout<<rakib.name<<rakib.roll<<rakib.section<<" "<<rakib.math_marks<<" "<<rakib.cls<<endl;
    cout<<sakib.name<<sakib.roll<<sakib.section<<" "<<sakib.math_marks<<" "<<sakib.cls<<endl;
    
    return 0;
}