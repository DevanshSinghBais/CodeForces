#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
 
        map<char,int> mpp, mpp1;
 
        for(int i = 0; i < n; i++)
            mpp[s[i]]++;
 
        int val = INT_MIN;
 
        for(int i = 0; i < n; i++)
        {
            mpp1[s[i]]++;
 
            mpp[s[i]]--;
            if(mpp[s[i]] == 0) 
                mpp.erase(s[i]);  
 
            val = max(val, (int)(mpp.size() + mpp1.size()));
        }
 
        cout<<val<<endl;
    }
}