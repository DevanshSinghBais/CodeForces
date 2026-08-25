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
 
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        vi a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        vector<vi> pos(n + 1);
 
        for (int i = 0; i < n; i++)
            pos[a[i]].pb(i);
 
        vi ans(n, -1);
 
        for (int i = 1; i <= n; i++)
        {
            if (pos[i].empty())
                continue;
 
            int mx = pos[i][0] + 1;
 
            for (int j = 1; j < sz(pos[i]); j++)
                mx = max(mx, pos[i][j] - pos[i][j - 1]);
 
            mx = max(mx, n - pos[i].back());
 
            for (int j = mx - 1; j < n; j++)
            {
                if (ans[j] != -1)
                    break;
 
                ans[j] = i;
            }
        }
 
        for (auto i : ans)
            cout << i << ' ';
        cout << endl;
    }
 
    return 0;
}