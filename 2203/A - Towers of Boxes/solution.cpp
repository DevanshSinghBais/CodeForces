#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,m,d;
     cin>>t;
     while(t--)
     {
          cin>>n>>m>>d;
          int k = (d/m)+1;
          if(n%k==0)
          {
               cout<<n/k<<endl;
          }
          else
          {
               cout<<(n/k)+1<<endl;
          }
     }
}
     
          
     