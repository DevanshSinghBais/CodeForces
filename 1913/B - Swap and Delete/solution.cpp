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
        int count1 = 0,count0 = 0;
        for(int i = 0;i<m;i++)
        {
            if(s[i]=='1')
            {
                count1++;
            }
            else
            {
                count0++;
            }
        }
        for(int i = 0;i<m;i++)
        {
            if(s[i]=='1')  
            {
                if(count0>0)
                {
                    count0--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(count1>0)
                {
                    count1--;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<count1+count0<<endl;
    }
}