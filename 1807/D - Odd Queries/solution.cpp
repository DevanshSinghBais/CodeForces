#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        vector<int> a(n), prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefix[i + 1] = prefix[i] + a[i];
        }
        
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            
            int presum  = prefix[l - 1];
            int suffsum = prefix[n] - prefix[r];
            int newSum  = presum + suffsum + (r - l + 1) * k;
            
            cout << (newSum % 2 != 0 ? "YES" : "NO") << "
";
        }
    }
    return 0;
}