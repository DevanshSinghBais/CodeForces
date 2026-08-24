#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        int onecount=0, minusonecount=0, operations=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                onecount++;
            }
            else
            {
                minusonecount++;
            }
        }
        if(onecount>=minusonecount)
        {
            if(minusonecount%2==0)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
        else
        {
            while(onecount<minusonecount)
            {
                operations++;
                minusonecount--;
                onecount++;
            }
            if(minusonecount%2==0)
            {
                cout<<operations<<endl;
            }
            else
            {
                cout<<operations+1<<endl;
            }
        }
    }
    return 0;
}