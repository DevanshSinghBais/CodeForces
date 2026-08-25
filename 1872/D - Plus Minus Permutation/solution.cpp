#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
 
        ll l = lcm(x, y);
 
        ll common = n / l;
 
        ll pos = n / x - common; // multiples of x but not y
        ll neg = n / y - common; // multiples of y but not x
 
        ll total = n * (n + 1) / 2;
 
        ll positive =
            total -
            (n - pos) * (n - pos + 1) / 2;
 
        ll negative =
            neg * (neg + 1) / 2;
 
        cout << positive - negative << '
';
    }
 
    return 0;
}