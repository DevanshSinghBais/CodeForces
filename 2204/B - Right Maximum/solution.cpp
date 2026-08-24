#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<int, vector<int>, greater<int>> mp;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
 
        long long ops = 0;
        int limit = n;  
 
        for (auto &p : mp) {
            auto &v = p.second;
 
           
            for (int i = (int)v.size() - 1; i >= 0; i--) {
                if (v[i] < limit) {
                    ops++;
                    limit = v[i];
                }
            }
        }
 
        cout << ops << "
";
    }
}