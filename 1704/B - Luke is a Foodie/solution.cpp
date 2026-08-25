#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<int>a(n),l(n),r(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            l[i] = a[i] - x;
            r[i] = a[i] + x;
        }
        int mn = l[0];
int mx = r[0];
 
int change = 0;
 
for(int i = 1; i < n; i++)
{
    int newmn = max(mn,l[i]);
    int newmx = min(mx,r[i]);
 
    
    if(newmn <= newmx)
    {
        mn = newmn;
        mx = newmx;
    }
    else
    {
        change++;
 
        mn = l[i];
        mx = r[i];
    }
}
cout<<change<<endl;
    }
}