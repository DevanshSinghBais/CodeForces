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
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vi pos;
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '*')
            pos.pb(i);
    }
 
    int mid = (sz(pos) - 1) / 2;
 
    ll ans = 0;
 
    for (int i = 0; i < sz(pos); i++) {
        ans += abs(pos[i] - (pos[mid] - mid + i));
    }
 
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}