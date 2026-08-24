#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        int b;
        int v[n];
        int count0=0,count1 = 0,count2 = 0;
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(a>v[i])
            {
                count0++;
            }
            else if(a==v[i])
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if(count0>count2)
        {
           b = a-1;
           
               cout<<b<<endl;
           
           
        }
        else if(count0<count2)
        {
            b = a+1;
           
            
                cout<<b<<endl;
            
            
        }
        else
        {
             cout<<a-1<<endl;
        }
    }
    return 0;
}