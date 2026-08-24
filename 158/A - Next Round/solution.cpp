#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int teams=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
        {
            teams++;
        }
    }
 
    cout<<teams<<endl;
    return 0;
}