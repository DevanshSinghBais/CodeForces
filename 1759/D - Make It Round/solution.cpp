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
 
void solve()
{
    ll n, m;
    cin >> n >> m;
 
    ll x = n;
    int cnt2 = 0, cnt5 = 0;
 
    while (x % 2 == 0)
    {
        cnt2++;
        x /= 2;
    }
 
    x = n;
    while (x % 5 == 0)
    {
        cnt5++;
        x /= 5;
    }
 
    ll k = 1;
 
    while (cnt2 < cnt5 && k * 2 <= m)
    {
        k *= 2;
        cnt2++;
    }
 
    while (cnt5 < cnt2 && k * 5 <= m)
    {
        k *= 5;
        cnt5++;
    }
 
    while (k * 10 <= m)
    {
        k *= 10;
    }
 
    k *= (m / k);
 
    cout << n * k << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}