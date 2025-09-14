#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n[100001],c[100001];
  while (cin.getline(n,100001))
  {
    int j=0;
  
    for (int i = 0; n[i]!= '\0'; i++)
    {
        if(n[i]!=' ')
        {
            c[j++]=n[i]; 
        }      
}
 c[j]='\0';
sort(c,c+j);
cout<<c<<endl;
  }
 
    return 0;
}