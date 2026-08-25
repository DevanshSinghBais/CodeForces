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
        int n, m;
        cin >> n >> m;
 
        vector<vector<long long>> v(n, vector<long long>(m));
        ll ans = 0;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
 
        for (int j = 0; j < m; j++)
        {
            vector<int> col;
 
            for (int i = 0; i < n; i++)
                col.push_back(v[i][j]);
 
            sort(col.begin(), col.end());
 
            for (int i = 0; i < n; i++)
                v[i][j] = col[i];
        }
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i > 0)
                {
                    ans += llabs(1ll * i * v[i][j] - v[i - 1][j]);
                    v[i][j] += v[i - 1][j];
                }
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}