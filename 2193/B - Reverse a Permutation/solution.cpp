#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>p(n);
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            mpp[p[i]]=i;
        }
        int j=0;
        while(j<n)
        {
            if(mpp[n-j]==j)
            {
                j++;
            }
            else
            {
                
                int index = mpp[n-j];
                reverse(p.begin()+j, p.begin()+index+1);
                break;
 
            }
        }
        for(int k=0;k<n;k++)
        {
            cout<<p[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}