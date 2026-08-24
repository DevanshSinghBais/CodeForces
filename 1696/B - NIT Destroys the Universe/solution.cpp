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
 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
 
        int total = 0, count = 0;
 
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0 && count > 0)
            {
                total++;
                count = 0;
            }
            else if(a[i] != 0)
            {
                count++;
            }
        }
 
        if(count > 0)
        {
            total++;
        }
 
        cout<<min(total, 2)<<endl;  
    }
 
    return 0;
}