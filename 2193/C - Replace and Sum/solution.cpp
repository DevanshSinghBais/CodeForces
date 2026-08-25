#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<int> a(n+1), b(n+1), c(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        for (int i = 1; i <= n; i++) c[i] = max(a[i], b[i]);
 
        // suf[i] = max(c[i..n])
        vector<long long> suf(n+2, 0);
        for (int i = n; i >= 1; i--)
            suf[i] = max((long long)c[i], suf[i+1]);
 
        // prefix sum of suf
        vector<long long> pre(n+2, 0);
        for (int i = 1; i <= n; i++)
            pre[i] = pre[i-1] + suf[i];
 
        for (int i = 0; i < q; i++) {
            int l, r; cin >> l >> r;
            cout << pre[r] - pre[l-1] << " 
"[i==q-1];
        }
    }
    return 0;
}