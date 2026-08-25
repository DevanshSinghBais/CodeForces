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
 
        long long pref = 0;
        long long best = LLONG_MAX;
 
        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
 
            pref += x;
            best = min(best, pref / i);
 
            cout << best << " ";
        }
        cout << '
';
    }
 
    return 0;
}