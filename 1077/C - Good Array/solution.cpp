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
    vector<pii> v;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    long long p = accumulate(a.begin(), a.end(), 0LL);
    vector<ll> sum(n, 0);
    for (int i = 0; i < n; i++)
    {
        sum[i] = p - a[i];
    }
    auto mx = *max_element(v.begin(), v.end());
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            ll rest = sum[v[i - 1].second] - mx.first;
            if (rest == v[i - 1].first)
            {
                ans.push_back(v[i].second + 1);
            }
        }
        else
        {
            ll rest = sum[v[i].second] - mx.first;
            if (rest == mx.first)
            {
                ans.push_back(v[i].second + 1);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
 
    return 0;
}