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
 
        string s;
        cin >> s;
 
        int groups = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                groups++;
        }
 
        int ans = groups;
 
        for (int i = 1; i <= n - 2; i++)
        {
            int cur = groups;
 
            if (s[i - 1] != s[i])
                cur--;
 
            if (s[i] != s[i + 1])
                cur--;
 
            if (s[i - 1] != s[i + 1])
                cur++;
 
            ans = min(ans, cur);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}