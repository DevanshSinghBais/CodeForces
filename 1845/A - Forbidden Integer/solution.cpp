#include<iostream>
using namespace std;
int main()
{
    int t,n,k,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(k==x)
            {
                cout<<"NO"<<endl;
            }
            else if(n%2!=0&&k>=3)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                while(n>0)
                {
                    if(n>3)
                    {
                        cout<<2<<" ";
                        n = n-2;
                    }
                    else
                    {
                        cout<<3<<" ";
                        n=n-3;
                    }
                }
                cout<<endl;
            }
            else if(n%2==0&&k>=2)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                while(n>0)
                {
                    cout<<2<<" ";
                    n=n-2;
                }
                cout<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}