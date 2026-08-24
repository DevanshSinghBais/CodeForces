#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,n;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
 
        vector<long long> v;
 
        long long power = 10;   // 10^1
 
        while(true)
        {
            long long denom = 1 + power;
 
            if(denom > n) break;
 
            if(n % denom == 0)
            {
                v.push_back(n / denom);
            }
 
            if(power > 1e18 / 10) break; // prevent overflow
 
            power *= 10;
        }
 
        reverse(v.begin(), v.end());  // ← added
 
        cout << v.size() << endl;
 
        for(long long x : v)
            cout << x << " ";
 
        cout << endl;
    }
 
    return 0;
}