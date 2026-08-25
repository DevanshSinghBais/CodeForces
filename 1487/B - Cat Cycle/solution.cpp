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
        ll n, k;
        cin >> n >> k;
        if (!(n % 2))
        {
            if (!(k % n))
            {
                cout << n << endl;
            }
            else
            {
                cout << k % n << endl;
            }
        }
        else
        {
            ll a, p;
            a = (n - 1) / 2;
            if (!(k % a))
            {
                p = (k / a) - 1;
            }
            else
            {
                p = k / a;
            }
            p = p % n;
            if (k % n)
            {
                k = k % n;
                ll ans = (k + p) % n;
                if (ans == 0)
                    ans = n;
                cout << ans << endl;
            }
            else
            {
                ll ans = (n + p) % n;
                if (ans == 0)
                    ans = n;
                cout << ans << endl;
            }
        }
    }
 
    return 0;
}