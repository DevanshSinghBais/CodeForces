#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,f,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>f>>a>>b;
        long long m[n];
        for(int i = 0;i<n;i++)
        {
            cin>>m[i];
        }
        long long x = m[0];
        for(int i = 0;i<n;i++)
        {
            if(i!=0)
            {
                x = m[i]-m[i-1];
                
            }
            if(x*a>b)
            {
                f = f-b;
                if(f<=0)
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else 
            {
                f = f - x*a;
                if(f<=0)
                {
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(i==n-1)
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}