#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        long long sum = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]>=a[i])
            {
                sum+= b[i];
            }
            else
            {
                sum+=a[i];
                swap(a[i],b[i]);
            }
        }
        int mx = *max_element(a, a + n);
        cout<<sum+mx<<endl;
        
        
        
    }
}