#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int low = a[0];
        int high = a[n-1];
        int mid = (low+high)/2;
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            ans = max(ans,abs(mid-a[i]));
        }
        cout<<ans<<endl;
    }
}