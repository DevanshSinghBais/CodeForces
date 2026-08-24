#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int cnt = 1;
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='R')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    
        
        
}