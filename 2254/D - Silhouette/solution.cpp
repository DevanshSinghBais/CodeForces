#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> b(n);
 
        map<int, vector<int>> mp;
 
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            mp[b[i]].push_back(i);
        }
 
        if (mp.begin()->first != 0) {
            cout << -1 << '
';
            continue;
        }
 
        vector<pair<int, vector<int>>> g;
        for (auto &x : mp)
            g.push_back(x);
 
        int m = g.size();
 
        vector<int> val(m);
 
        bool ok = true;
 
        if (m == 1) {
            for (auto id : g[0].second)
                b[id] = 1;
 
            for (auto x : b)
                cout << x << " ";
            cout << '
';
            continue;
        }
 
        for (int i = 0; i < m - 1; i++) {
            int diff = g[i + 1].first - g[i].first;
            int cnt = g[i].second.size();
 
            if (diff % cnt != 0) {
                ok = false;
                break;
            }
 
            val[i] = diff / cnt;
 
            if (val[i] <= 0) {
                ok = false;
                break;
            }
 
            if (i && val[i] <= val[i - 1]) {
                ok = false;
                break;
            }
        }
 
        if (!ok) {
            cout << -1 << '
';
            continue;
        }
 
        val[m - 1] = val[m - 2] + 1;
 
        for (auto id : g[m - 1].second)
            b[id] = val[m - 1];
 
        for (int i = 0; i < m - 1; i++)
            for (auto id : g[i].second)
                b[id] = val[i];
 
        for (auto x : b)
            cout << x << " ";
        cout << '
';
    }
 
    return 0;
}