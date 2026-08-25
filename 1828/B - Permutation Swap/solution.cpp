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
 
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];
 
        int g = 0; // gcd accumulator; gcd(0, x) = x
 
        for (int i = 1; i <= n; i++) {
            int diff = abs(p[i] - i);
            if (diff != 0) {
                g = std::gcd(g, diff);
            }
        }
 
        cout << g << "
";
    }
 
    return 0;
}