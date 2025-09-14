#include<bits/stdc++.h>
using namespace std;

int* sort_it(int n)
{
    int* a=new int[n];

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    /* code */
  }
sort(a,a+n,greater<int>());
  return a;

}
int main()
{
  int n;
  cin>>n;
  
 int* sorted= sort_it(n);
for (int i = 0; i < n; i++)
{
    cout<<sorted[i]<<' ';
    /* code */
}

  
    
    return 0;
}