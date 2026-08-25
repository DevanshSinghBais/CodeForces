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
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> presum(n);
        presum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            presum[i] = a[i] + presum[i - 1];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll p = 0;
            if (x >= presum[i])
                p = (x - presum[i]) / (i + 1) + 1;
 
            sum += p;
        }
        cout << sum << endl;
    }
 
    return 0;
}