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
        int countp = 0, countq = 0;
        
        for(int i=0;i<m;i++)
        {
            if(i!=m-1&&s[i]=='a'&&s[i+1]=='b')
            {
                countp++;
                
                
            }
            else if(i!=m-1&&s[i]=='b'&&s[i+1]=='a')
            {
                countq++;
                
            }
        }
        if(countp==countq)
        {
            cout<<s<<endl;
        }
        else if(countp>countq)
        {
            s[m-1] = 'a';
            cout<<s<<endl;
        }
        else
        {
             s[m-1] = 'b';
             cout<<s<<endl;
        }
    }
}