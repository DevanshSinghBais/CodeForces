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
        ll a[n], b[n];
        vector<pll> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end());
 
        vector<ll> nums;
        for (auto &x : v)
            nums.push_back(x.second);
 
        vector<ll> vals = nums;
        sort(vals.begin(), vals.end());
 
        int m = vals.size();
 
        vector<int> bit(m + 1, 0);
 
        auto update = [&](int idx)
        {
            while (idx <= m)
            {
                bit[idx]++;
                idx += idx & -idx;
            }
        };
 
        auto query = [&](int idx)
        {
            int sum = 0;
            while (idx > 0)
            {
                sum += bit[idx];
                idx -= idx & -idx;
            }
            return sum;
        };
 
        vector<int> p(n);
 
        for (int i = n - 1; i >= 0; i--)
        {
 
            int pos = lower_bound(vals.begin(), vals.end(), nums[i]) - vals.begin() + 1;
 
            p[i] = query(m) - query(pos);
 
            update(pos);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += n - i - 1 - p[i];
        }
        cout << ans << endl;
    }
 
    return 0;
}