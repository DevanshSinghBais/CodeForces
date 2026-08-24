#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long s,k,m;
        cin>>s>>k>>m;
        int p = m/k;
        int q = m%k;
        long long topsand;
        if(p%2==0)
        {
            
            if(s>q)
            {
                cout<<s-q<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            if(s<k)
            {
                topsand = s;
            }
            else
            {
                topsand = k;
            }
            if(topsand>q)
            {
                cout<<topsand-q<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
            
        }
    }
}