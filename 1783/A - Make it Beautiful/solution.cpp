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
        int d=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b = 1;
        int prefixsum = a[0];
        int minterm = a[0];
        int index = 0;
        
        for(int  i =1;i<n;i++)
        {
            if(i==1&&a[1]==a[0])
            {
                if(b==n-1)
                {
                    cout<<"NO"<<endl;
                    d++;
                    break;
                }
                swap(a[1+b],a[1]);
                b++;
                i--;
               
            }
            else if(prefixsum != a[i])
            {
                prefixsum+=a[i];
                if(minterm>a[i])
                {
                    minterm = a[i];
                    index = i;
                }
               
               
                
            }
            else if(prefixsum == a[i])
            {
                prefixsum +=a[i];
                swap(a[i],a[index]);
            }
        }
        if(!d)
        {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
        }
        
        
    }
    return 0;
}