#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int moves = 0;
        while(n)
        {
            
            if(n==1)
            {
                cout<<moves<<endl;
                break;
            }
            int p = n%6;
            if(p!=0&&p!=3)
            {
                cout<<-1<<endl;
                break;
            }
            else if(p==0)
            {
                n = n/6;
                moves+=1;
            }
            else
            {
                n = (2*n)/6;
                moves+=2;
            }
            
        }
    }
    
}