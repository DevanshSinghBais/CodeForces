#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        
        int k = n-1;
        int i = 0;
        while(i<n-2&&k>=2)
        {
            int max = INT_MIN,c=-1;
        
        for(int j=i+1;j<k;j++)
        {
            if(p[j]>max)
            {
                max = p[j];
                c = j;
            }
        }
        if(c!=-1&&max>p[i]&&max>p[k])
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<c+1<<" "<<k+1<<endl;
            break;
        }
        else
        {
            if(p[i]>p[k])
            {
                i++;
            }
            else
            {
                k--;
            }
        }
        }
        if(i==n-2||k==1)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}