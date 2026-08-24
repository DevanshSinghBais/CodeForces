#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        string s;
        cin>>s;
        vector<int>v1;
        vector<int>v2;
        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }
        for(int i = 0;i<n;i++)
        {
            if(s[i]==c)
            {
                v2.push_back(i);
            }
            else if(s[i]=='g')
            {
                v1.push_back(i);
            }
            
            
        }
        int i = 0 , j = 0;
        int p = v1.size();
        int q = v2.size();
        int dist = 0, maxdist = 0;
        int k = -1 ;
        while(j<q)
        {
            if(v1[i]>v2[j])
            {
                dist = v1[i]-v2[j];
                maxdist = max(dist,maxdist);
                j++;
            }
            else
            {
                if(i!=p-1)
                {
                    i++;
                }
                else
                {
                    k = j;
                    break;
                }
            }
        }
        if(k!=-1)
        {
            dist = n - v2[k]+v1[0];
            maxdist = max(dist,maxdist);
        }
        cout<<maxdist<<endl;
    }
}