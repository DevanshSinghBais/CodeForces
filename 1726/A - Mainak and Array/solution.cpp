#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
 
        vector<int> a(n);
 
        int maxo = INT_MIN, mino = INT_MAX;
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            maxo = max(maxo,a[i]);
            mino = min(mino,a[i]);
        }
 
        int maxval = INT_MIN;
        int maxsuff = INT_MIN;
        int minpre = INT_MAX;
        int ans1, ans;
 
        if(a[0]==mino || a[n-1]==maxo)
        {
            cout<<maxo-mino<<endl;
            continue;
        }
 
        for(int i=0;i<n-1;i++)
        {
            maxval = max(maxval,a[i]-a[i+1]);
        }
 
        for(int i=1;i<n;i++)
        {
            maxsuff = max(maxsuff,a[i]);
        }
 
        for(int i=0;i<n;i++)
        {
            minpre = min(minpre,a[i]);
        }
 
        ans1 = max(a[n-1]-minpre, maxsuff-a[0]);
        ans = max(ans1,maxval);
 
        cout<<ans<<endl;
    }
 
    return 0;
}