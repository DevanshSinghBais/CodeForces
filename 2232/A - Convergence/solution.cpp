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
        int m = n/2;
        int l = lower_bound(a,a+n,a[m]) - a;
        int r = upper_bound(a,a+n,a[m]) - a;
        int left = l;
        int right = n-r;
        if(left==right)
        {
            cout<<left<<endl;
        }
        else
        {
            cout<<max(left,right)<<endl;
        }
    }
}