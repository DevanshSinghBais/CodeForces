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
        int count0 = 0;
        int count1 = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                count0++;
            }
            else if(a[i]==-1)
            {
                count1++;
            }
        }
        if(count1%2==0)
        {
            cout<<count0<<endl;
        }
        else
        {
            cout<<count0+2<<endl;
        }
    }
}