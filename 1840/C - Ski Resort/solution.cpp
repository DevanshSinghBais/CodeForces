#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    long long q;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>q;
        long long a[n];
        map<int, int>mpp;
        int b = 1;
        
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=q)
            {
                
                mpp[b]++;
            }
            else
            {
                b = b+1;
               
            }
        }
        long long comb = 0;
        for(auto it:mpp)
        {
            if(it.second>=k)
            {
                int l = it.second;
                comb += ((l-k+1)*1LL*(l-k+2)*1LL)/2;
            }
        }
        cout<<comb<<endl;
    }
}