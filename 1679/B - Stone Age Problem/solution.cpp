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
 
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int t, i;
    ll x;
    vector<int> v1(n, q + 1);
    vector<pii> v2;
 
    while (q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> i >> x;
            if (v2.empty())
            {
                sum += x - v[i - 1];
            }
            else if (v1[i - 1] < v2.back().second)
            {
                sum += x - v[i - 1];
            }
            else
            {
                sum += x - v2.back().first;
            }
            cout << sum << endl;
            v[i - 1] = x;
            v1[i - 1] = q;
        }
        else
        {
            cin >> x;
            sum = n * x;
            cout << sum << endl;
            v2.push_back({x, q});
        }
    }
 
    return 0;
}