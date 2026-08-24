#include<iostream>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int button =0,door=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0)
            {
                door++;
            }
            else if(a[i]==1)
            {
                button++;
                i=i+x-1;
                door=door+x;
            }
            if(button>=2)
            {
                cout<<"NO"<<endl;
                break;
            }
            else if(door>=n)
            {
                cout<<"YES"<<endl;
                break;
            }
 
        }
        
 
    }
    return 0;
}