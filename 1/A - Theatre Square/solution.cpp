#include<iostream>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long sum1 = 0,sum2=0;
    if(n%a==0)
    {
        sum1 = n/a;
    }
    else
    {
        sum1 = (n/a)+1;
    }
    if(m%a==0)
    {
        sum2 = m/a;
    }
    else
    {
        sum2 = (m/a)+1;
    }
    cout<<sum2*sum1<<endl;
    return 0;
    
}