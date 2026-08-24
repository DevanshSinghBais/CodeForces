#include<iostream>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long x,y;
        if(n<4||n%2==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n%4==0)
        {
            y = n/4;
        }
        else if(n%4==2)
        {
            y = ((n-6)/4)+1;
        }
        if(n%6==0)
        {
            x = n/6;
        }
        else if(n%6==2)
        {
            x = ((n-8)/6)+2;
        }
        else
        {
            x= ((n-4)/6)+1;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}