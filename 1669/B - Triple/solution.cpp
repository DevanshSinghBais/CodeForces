#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        map<int,int> mpp;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mpp[a[i]]++;
        }
 
        bool found = false;
 
        for(auto it : mpp)
        {
            if(it.second >= 3)
            {
                cout << it.first << endl;
                found = true;
                break;
            }
        }
 
        if(!found)
        {
            cout << -1 << endl;   // assuming -1 if no element appears >=3 times
        }
    }
}