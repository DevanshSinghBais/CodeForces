#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,q;
    cin>>n>>q;
 
    vector<long long>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
 
    sort(a.begin(),a.end());
 
    vector<long long>presum(n);
    presum[0]=a[0];
 
    for(int i=1;i<n;i++)
        presum[i]=presum[i-1]+a[i];
 
    while(q--)
    {
        int x,y;
        cin>>x>>y;
 
        int l = n-x;
        int r = n-x+y-1;
 
        long long ans = presum[r];
        if(l>0) ans -= presum[l-1];
 
        cout<<ans<<endl;
    }
}