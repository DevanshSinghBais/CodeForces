#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        bool check = true;
        sort(b,b+n);
        for(int i = 0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            cout<<"YES"<<endl;
        }
        else if(k>=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}