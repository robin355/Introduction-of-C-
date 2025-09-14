#include<bits/stdc++.h>
using namespace std;
class students
{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_mark;
    int eng_mark;

};
bool comp(students l,students r)
{
    if((l.math_mark+l.eng_mark)>(r.math_mark+r.eng_mark))
    {
        return true;
    }
    else if((l.math_mark+l.eng_mark)==(r.math_mark+r.eng_mark))
    {
        return l.id<r.id;
    }
    else{
        return false;
    }

}
int main()
{
    int n;
    cin>>n;
    students a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_mark>>a[i].eng_mark;

    }
    sort(a,a+n,comp);
    for (int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id <<" "<<a[i].math_mark<<" "<<a[i].eng_mark<<endl;
    }
   
    
    
    return 0;
}