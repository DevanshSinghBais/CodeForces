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
 
    vector<pll> v(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
        v[i].first = 0;
    }
 
    int q;
    cin >> q;
 
    vector<ll> pay(q + 2, 0);
 
    for (int i = 1; i <= q; i++)
    {
        int t;
        cin >> t;
 
        if (t == 1)
        {
            int p;
            ll x;
            cin >> p >> x;
            p--;
 
            v[p].first = i;
            v[p].second = x;
        }
        else
        {
            ll x;
            cin >> x;
            pay[i] = x;
        }
    }
 
    for (int i = q; i >= 0; i--)
        pay[i] = max(pay[i], pay[i + 1]);
 
    for (int i = 0; i < n; i++)
        cout << max(v[i].second, pay[v[i].first]) << " ";
 
    cout << endl;
 
    return 0;
}