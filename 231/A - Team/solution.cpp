#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--)
    {
        int a,b,c;
        int sum;
        cin>>a>>b>>c;
        sum = a+b+c;
        if(sum>=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}