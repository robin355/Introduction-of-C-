    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      int t;
      cin>>t;
      for (int test = 0; test < t; test++)
      {
        bool found = false;
        int n,Totalsum,i;
        cin>>n>>Totalsum;
        int a[n];
        for ( i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        if(n>=3)
        {
         for ( i = 0; i < n; i++)
        {
  
          for (int j = i + 1; j < n - 1; j++) {

            for (int k = j + 1; k < n; k++) { 

                if (a[i] + a[j] + a[k] == Totalsum)
                    found=true;
            } 
        }     

        }        
        }
if(found)
{
  cout<<"YES"<<endl;
}
else{
  cout<<"NO"<<endl;
}

           
        }

        
  }