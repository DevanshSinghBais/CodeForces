#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[n],c[n];
        sort(a,a+n);
        int p=0,q=0;
        int min = a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]==min)
            {
                b[p++]=a[i];
            }
            else
            {
                c[q++]=a[i];
            }
        }
        if(q==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<p<<" "<<q<<endl;
            for(int i=0;i<p;i++)
            {
                cout<<b[i]<<" ";
               
            }
             cout<<endl;
            for(int i=0;i<q;i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
 
    }
    return 0;
 
}