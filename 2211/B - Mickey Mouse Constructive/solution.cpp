#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 676767677;
 
int countDivisors(int n) {
    n = abs(n);
    int cnt = 0;
    for (int i = 1; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
 
        int T = x - y;
 
        long long ans;
        if (T == 0) ans = 1;
        else ans = countDivisors(T);
 
        cout << (ans % MOD) << "
";
 
        // Construct one optimal array
        vector<int> a;
        a.reserve(x + y);
 
        if (T >= 0) {
            // 1's first, then -1's (your idea)
            for (int i = 0; i < x; i++) a.push_back(1);
            for (int i = 0; i < y; i++) a.push_back(-1);
        } else {
            // -1's first, then 1's
            for (int i = 0; i < y; i++) a.push_back(-1);
            for (int i = 0; i < x; i++) a.push_back(1);
        }
 
        for (int i = 0; i < (int)a.size(); i++) {
            cout << a[i] << (i + 1 == (int)a.size() ? '
' : ' ');
        }
    }
    return 0;
}