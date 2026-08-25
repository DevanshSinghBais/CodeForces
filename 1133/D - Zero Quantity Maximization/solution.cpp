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
 
    int n;
    cin >> n;
 
    vll a(n), b(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    for (int i = 0; i < n; i++)
        cin >> b[i];
 
    map<pll, int> mp;
 
    int ans = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (b[i] == 0)
                ans++;
            continue;
        }
 
        ll p = -b[i];
        ll q = a[i];
 
        ll g = gcd(abs(p), abs(q));
 
        p /= g;
        q /= g;
 
        if (q < 0)
        {
            p = -p;
            q = -q;
        }
 
        mp[{p, q}]++;
    }
 
    int mx = 0;
 
    for (auto x : mp)
        mx = max(mx, x.ss);
 
    cout << ans + mx << endl;
 
    return 0;
}