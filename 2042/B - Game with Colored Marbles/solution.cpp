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
        map<int,int>mpp;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            mpp[a[i]]++;
        }
        int count1 = 0,count2 = 0;
        for(auto it:mpp)
        {
            if(it.second == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if(count1%2==0)
        {
            cout<<(count1)+count2<<endl;
        }
        else
        {
            cout<<(((count1/2)+1)*2)+count2<<endl;
        }
    }
}