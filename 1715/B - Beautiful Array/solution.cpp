#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,n,k,b,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>b>>s;
 
        if(k==1)
        {
            if(b==s)
            {
                for(int i = 0;i<n-1;i++)
                    cout<<0<<" ";
                cout<<s<<endl;
            }
            else
                cout<<-1<<endl;
 
            continue;
        }
 
        if (s < b*k || s > b*k + (k-1)*n)
        {
            cout << -1 << endl;
            continue;
        }
 
        long long rem = s - b*k;
 
        cout << b*k + min(rem, k-1) << " ";
        rem -= min(rem, k-1);
 
        for(int i = 2; i <= n; i++)
        {
            long long take = min(rem, k-1);
            cout << take << " ";
            rem -= take;
        }
 
        cout << endl;
    }
}