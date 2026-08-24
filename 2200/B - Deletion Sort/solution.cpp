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
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i] = a[i];
            
        }
        int d = 0;
        sort(b,b+n);
        for(int i  =0;i<n;i++)
        {
            if(b[i]==a[i])
            {
                d++;
            }
        }
        if(d==n)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}