#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long p = k*(y+1);
        if((p-1)%(x-1)==0)
        {
            cout<<k+((p-1)/(x-1))<<endl;
        }
        else
        {
            cout<<k+((p-1)/(x-1))+1<<endl;
        }
    }
}