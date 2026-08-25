#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define endl '
'
 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        ll k, x;
        cin >> k >> x;
 
        ll sum = k * (k + 1) / 2;
 
        if (x >= k * k)
        {
            cout << 2 * k - 1 << '
';
            continue;
        }
 
        if (x <= sum)
        {
            long double r = (sqrtl(1.0L + 8.0L * x) - 1.0L) / 2.0L;
 
            ll ans;
            if (fabsl(r - floorl(r)) < 1e-12)
                ans = (ll)r;
            else
                ans = (ll)ceill(r);
 
            cout << ans << '
';
        }
        else
        {
            x -= sum;
 
            ll m = k;
 
            long double r =
                ((2.0L * k - 1.0L) -
                 sqrtl(4.0L * k * k - 4.0L * k + 1.0L - 8.0L * x)) /
                2.0L;
 
            ll p;
            if (fabsl(r - floorl(r)) < 1e-12)
                p = (ll)r;
            else
                p = (ll)ceill(r);
 
            m += p;
 
            cout << m << '
';
        }
    }
 
    return 0;
}