#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    ll k, x;
    cin >> n >> k >> x;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    sort(a.begin(), a.end());
 
    vector<ll> need;
    int groups = 1;
 
    for (int i = 1; i < n; i++) {
        ll gap = a[i] - a[i - 1];
 
        if (gap > x) {
            groups++;
            need.push_back((gap - 1) / x);
        }
    }
 
    sort(need.begin(), need.end());
 
    for (ll req : need) {
        if (k >= req) {
            k -= req;
            groups--;
        } else {
            break;
        }
    }
 
    cout << groups << '
';
    return 0;
}