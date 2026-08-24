#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    
    while (t--)
    {
        string n;
        cin >> n;
 
        vector<int> v;
        
        for(char ch : n)
            v.push_back(ch - '0');
 
        long long cnt = 0;
        int m = v.size();
        int c = 0;
 
        for (int i = m - 1; i >= 0; i--)
        {
            if (v[i] != 0)
            {
                c = i;
                break;
            }
        }
 
        for (int i = 0; i < c; i++)
        {
            if (v[i] != 0)
                cnt++;
        }
 
        cout << cnt + m - c - 1 << endl;
    }
    return 0;
}