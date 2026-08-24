#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        long long n;
        cin >> n;
 
        long long perimeter = 4LL * n;
        long long step = n + 1;
 
        long long g = __gcd(perimeter, step);
 
        long long ans = perimeter / g + 1;
 
        cout << ans << "
";
    }
 
    return 0;
}