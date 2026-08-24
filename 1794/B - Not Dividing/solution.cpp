#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long> a(n);
 
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        // Step 1: eliminate 1s
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
                a[i]++;
        }
 
        // Step 2: fix divisibility
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1] % a[i] == 0)
                a[i+1]++;
        }
 
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
 
        cout<<endl;
    }
}