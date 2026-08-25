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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                v.push_back(i + 1);
            }
        }
        if (v.empty())
        {
            cout << 0 << '
';
            continue;
        }
 
        long long cost = 0;
        int mx = v.back();
 
        vector<bool> present(mx + 1, false);
 
        for (int x : v)
            present[x] = true;
 
        for (int num : v)
        {
            for (long long cur = num; cur <= mx; cur += num)
            {
                if (!binary_search(v.begin(), v.end(), cur))
                    break;
 
                if (!present[cur])
                    continue;
 
                present[cur] = false;
                cost += num;
            }
        }
 
        cout << cost << '
';
    }
 
    return 0;
}