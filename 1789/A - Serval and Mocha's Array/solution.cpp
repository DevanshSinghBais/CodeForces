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
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool found = false;
 
        
        for (int i = 0; i < n && !found; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(a[i], a[j]) <= 2) {
                    found = true;
                    break;
                }
            }
        }
 
        cout << (found ? "YES
" : "NO
");
    }
 
    return 0;
}