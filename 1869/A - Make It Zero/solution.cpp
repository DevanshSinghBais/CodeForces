#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
 
    while(t--)
    {
        cin>>n;
        int a[n];
        int xo = 0;
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            xo = xo^a[i];
            mpp[a[i]]++;
        }
        if(mpp[0]==n)
        {
            cout<<0<<endl;
        }
        else if(xo==0)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else if(n%2==0)
        {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else
        {
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
            
        }
        
    }
    return 0;
 
}