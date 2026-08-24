#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        if(x>=k*(k+1)/2&&x<=k*(2*n+1-k)/2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}