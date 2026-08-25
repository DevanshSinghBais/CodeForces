#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, k;
        cin >> n >> k;
 
        vector<pair<int,int>> v;
 
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            int val = x % k;
            if(val == 0) val = k;
 
            v.push_back({val, i});
        }
 
        sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
            if(a.first == b.first)
                return a.second < b.second; // smaller index first
            return a.first > b.first;       // larger value first
        });
 
        for(auto x : v) {
            cout << x.second + 1 << " ";
        }
        cout << '
';
    }
 
    return 0;
}