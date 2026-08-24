#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool found = false;
    for(int i = 0;i<n;i++)
    {
        if(i!=n-1&&s[i]>s[i+1])
        {
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"NO"<<endl;
        
    }
}