#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
 
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
 
        vector<long long> x(n);
 
        for(int i=0;i<n;i++)
            cin>>x[i];
 
        sort(x.begin(),x.end());
 
        long long c = b;
        long long sec = 0;
        long long i = 0;
 
        while(c>0)
        {
            sec += c-1;
            c=1;
 
            while(c<=a && i<n)
            {
                c = c + x[i];
 
                if(c==a)
                {
                    i++;
                    break;
                }
                else if(c<a)
                {
                    i++;
                }
                else
                {
                    if(c-x[i]==1)
                    {
                        c = a;
                        i++;
                        break;
                    }
                    else
                    {
                        c = c - x[i];
                        break;
                    }
                }
            }
 
            sec += c-1;
            c =1;
 
            if(i==n)
                break;
        }
 
        cout<<sec+1<<endl;
    }
}