#include <bits/stdc++.h>
 
using namespace std;
 
int get_kth_largest(const vector<int>& a, int k) {
    int n = a.size();
    vector<int> f(n);
    vector<bool> present(n + 2, false);
    int current_mex = 0;
    for (int i = 0; i < n; ++i) {
        present[a[i]] = true;
        while (present[current_mex]) {
            current_mex++;
        }
        f[i] = current_mex;
    }
    sort(f.rbegin(), f.rend());
    return f[k - 1];
}
 
void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    int best_val = get_kth_largest(a, k);
    int best_u = -1, best_v = -1;
 
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(a[i], a[j]);
            int val = get_kth_largest(a, k);
            if (val > best_val) {
                best_val = val;
                best_u = i + 1;
                best_v = j + 1;
            }
            swap(a[i], a[j]);
        }
    }
 
    if (best_u == -1) {
        cout << -1 << "
";
    } else {
        cout << best_u << " " << best_v << "
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}