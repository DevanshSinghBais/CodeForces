#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m = s.length();
        int countp = 0,countq = 0,countr= 0;
        int d = 0;
        if(m==1)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i = 0;i<m;i++)
            {
                if(i!=m-1&&((s[i]=='>'&&(s[i+1]=='*'||s[i+1]=='<'))||(s[i]=='*'&&(s[i+1]=='*'||s[i+1]=='<'))))
                {
                    cout<<-1<<endl;
                    d++;
                    break;
                }
                else if(s[i]=='>')
                {
                    countp++;
                }
                else if(s[i]=='<')
                {
                    countq++;
                }
                else if(s[i]=='*')
                {
                    countr++;
                }
                
            }
            if(!d)
            {
                cout<<max(countp,countq)+countr<<endl;
            }
        }
    }
}