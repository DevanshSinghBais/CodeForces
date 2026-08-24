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
        int count = 1;
        int maxcount =1;
        for(int i = 1;i<n;i++)
        {
            if(a[i]==a[i-1]+1||a[i]==a[i-1])
            {
                if(a[i]==a[i-1]+1)
                {
                count++;
                maxcount=max(count,maxcount);
                }
                else
                {
                    continue;
                }
            }
            else
            {
                count = 1;
            }
        }
        cout<<maxcount<<endl;
    }
    return 0;
}