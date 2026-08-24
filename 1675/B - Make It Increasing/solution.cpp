#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int j= n-1,count =0;
        while(j>=1)
        {
            if(a[j]==0)
            {
                count = -1;
                break;
            }
            if(a[j-1]>=a[j])
            {
                while(a[j-1]>=a[j])
                {
                    a[j-1]=a[j-1]/2;
                    count++;
                }
                
            }
            j--;
        }
        cout<<count<<endl;
    }
    return 0;
}