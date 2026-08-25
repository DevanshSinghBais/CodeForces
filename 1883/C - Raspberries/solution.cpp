#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tc,n,k;
    cin>>tc;
 
    while(tc--)
    {
        cin>>n>>k;
 
        int a[n];
 
        int p = 0,q = 3,r = 0,s = 0,t = 0,u = 5;
        int odd = 0;
 
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
 
            if(a[i]%2==0)
            {
                odd = 1;
            }
 
            if(a[i]%3==0)
            {
                p++;
            }
            else
            {
                q = min(q,3-a[i]%3);
            }
 
            if(a[i]%2==0)
            {
                r++;
            }
 
            if(a[i]%4==0)
            {
                s++;
            }
 
            if(a[i]%5 == 0)
            {
                t++;
            }
            else
            {
                u = min(u,5-a[i]%5);
            }
        }
 
        if(k==2)
        {
            if(odd)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
 
        else if(k==3)
        {
            if(p>0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<q<<endl;
            }
        }
 
        else if(k==4)
        {
            int v = 4;
 
            for(int i = 0 ; i < n ; i++)
            {
                if(a[i]%4==0)
                {
                    v = 0;
                }
                else
                {
                    v = min(v,4-a[i]%4);
                }
            }
 
            if(r>=2 || s>=1)
            {
                cout<<0<<endl;
            }
            else if(r==1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<min(2,v)<<endl;
            }
        }
 
        else
        {
            if(t>0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<u<<endl;
            }
        }
    }
}