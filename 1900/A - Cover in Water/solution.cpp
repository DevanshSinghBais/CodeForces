#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int maxdot = 0;
        int dot = 0;
        map<int,int>mpp;
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='.')
            {
                dot++;
                maxdot = max(maxdot,dot);
            }
            else
            {
                mpp[dot]++;
                
                dot = 0;
            }
            if(i==n-1)
            {
                mpp[dot]++;
            }
        }
        int sum = 0;
        if(maxdot>=3)
        {
            cout<<2<<endl;
        }
        else
        {
            for(auto it:mpp)
            {
                sum += it.first*it.second;
            }
            cout<<sum<<endl;
        }
    }
        
}