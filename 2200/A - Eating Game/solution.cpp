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
        map<int,int>mpp;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            mpp[a[i]]++;
        }
        sort(a,a+n);
        cout<<mpp[a[n-1]]<<endl;
        
    }
}