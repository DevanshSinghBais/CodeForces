#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans = ans^a[i];
        }
        if(n%2==0)
        {
            if(ans==0)
            {
                sort(a,a+n);
                cout<<a[n-1]<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}