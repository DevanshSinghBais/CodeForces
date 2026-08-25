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
 
using pii = pair<int,int>;
using pll = pair<ll,ll>;
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
        ll k;
        cin >> n >> k;
 
        map<ll,ll> freq;
 
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
 
            ll need = (k - x % k) % k;
 
            if (need != 0)
                freq[need]++;
        }
 
        ll ans = 0;
 
        for (auto &it : freq)
        {
            ll need = it.first;
            ll cnt = it.second;
 
            ans = max(ans, need + (cnt - 1) * k + 1);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}