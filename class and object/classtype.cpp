#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
    int roll;
    double gpa;
    Students(int r,double g)
    {
    roll=r;
    gpa=g;
 }
};
int main()
{
    Students a(12,3.5);
    Students b(33,2.6);
  

   cout<<a.roll<<' '<<a.gpa<<endl;
   cout<<b.roll<<' '<<b.gpa<<endl;
      
    return 0;
}