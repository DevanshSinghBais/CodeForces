#include<iostream>
using namespace std;
int main()
{
    int t,x,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        if(x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
        
    }
    return 0;
}