#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
 
        long long x = 0, y = 0;
 
        for(int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
 
            if(val == 0) x++;
            if(val == 1) y++;
        }
 
        long long ans = (1LL << x) * y;
        cout << ans << endl;
    }
    return 0;
}