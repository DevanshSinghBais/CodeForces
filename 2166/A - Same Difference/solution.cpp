#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        vector<int> freq(26, 0);
 
        for(char c : s)
        {
            freq[c - 'a']++;
        }
        
        char lastelement = s[n-1];
        int count = 1;
        for(int i = n-2;i>=0;i--)
        {
            if(s[i]==lastelement)
            {
                count++;
            }
        }
        
        cout<<n-count<<endl;
        
    }
    return 0;
}