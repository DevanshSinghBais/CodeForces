#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int a[n];
    map<int,int>mpp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpp[a[i]]++;
    }
    int k = (n/2)+n%2;
    int d = 0;
    for(auto it:mpp)
    {
        if(it.second>k)
        {
            d++;
            break;
        }
    }
    if(!d)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
 
    return 0;
}