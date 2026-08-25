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
        int n;
        cin >> n;
 
        vector<pair<ll, ll>> v;
 
        for (int c = 0; c < n; c++)
        {
            int k;
            cin >> k;
 
            ll need = 0;
 
            for (int i = 0; i < k; i++)
            {
                ll x;
                cin >> x;
                need = max(need, x - i + 1LL);
            }
 
            v.push_back({need, k});
        }
 
        sort(all(v));
 
        ll ans = v[0].first;
        ll cur = ans;
 
        for (auto &p : v)
        {
            if (cur < p.first)
            {
                ans += (p.first - cur);
                cur = p.first;
            }
            cur += p.second;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}