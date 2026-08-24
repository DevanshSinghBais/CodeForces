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
        vector<pair<int,int>> v2;
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            v2.push_back({a[i], i+1});
        }
 
        sort(v2.rbegin(), v2.rend()); // sort decreasing by value
 
        vector<int> v(n+1);
        int k=1, q=-1;
        bool found=true;
 
        for(auto x : v2)
        {
            if(found)
            {
                v[x.second]=k;
                k++;
                found=false;
            }
            else
            {
                v[x.second]=q;
                q--;
                found=true;
            }
        }
 
        long long time=0;
        int p=0;
 
        for(int i=0;i<n;i++)
        {
            time += 2LL * abs(v[i+1]-p) * a[i];
        }
 
        cout<<time<<endl;
 
        for(int i=0;i<=n;i++)
        cout<<v[i]<<" ";
 
        cout<<endl;
    }
}