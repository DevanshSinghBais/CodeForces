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
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        bool ok = true;
 
        for (int i = k; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (s[i % k] == '0')
                {
                    ok = false;
                    break;
                }
                s[i % k] = '1';
            }
            else if (s[i] == '0')
            {
                if (s[i % k] == '1')
                {
                    ok = false;
                    break;
                }
                s[i % k] = '0';
            }
        }
 
        if (!ok)
        {
            cout << "NO" << endl;
            continue;
        }
 
        int c1 = 0, c0 = 0;
 
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '1')
                c1++;
            else if (s[i] == '0')
                c0++;
        }
 
        if (c1 > k / 2 || c0 > k / 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
 
    return 0;
}