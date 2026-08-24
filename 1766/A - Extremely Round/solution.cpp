#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=9)
        {
            cout<<n<<endl;
        }
        else if(n<=99)
        {
            cout<<9+n/10<<endl;
        }
        else if(n<=999)
        {
            cout<<18+n/100<<endl;
        }
        else if(n<=9999)
        {
            cout<<27+n/1000<<endl;
        }
         else if(n<=99999)
        {
            cout<<36+n/10000<<endl;
        }
         else if(n<=999999)
        {
            cout<<45+n/100000<<endl;
        }
        
    }
    return 0;
}