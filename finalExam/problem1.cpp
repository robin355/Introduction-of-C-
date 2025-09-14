#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {

    string first,second;
    cin>>first;
    cin>>second;
    while(1)
    {
        int inx=first.find(second);
        if(inx!=-1)
        {
             first.replace(inx, second.length(), "#");

        }
        else{
            break;
        }

    }
      
}
    return 0;
}