#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1;
  bool f=false;
  getline(cin,s1); 
   stringstream ss(s1);
   string word;
 while(ss>>word)
 {
    if(word=="Jessica")
    {
         f=true;
         break;
    }
   
    
 }
 if(f)
 {
    cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
 
  return 0;
}