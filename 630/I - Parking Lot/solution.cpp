#include<bits/stdc++.h>
using namespace std;
 
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
 
int main() {
    int n;
    cin >> n;
 
    long long ans = 0;
 
    for(int L = 0; L <= n-2; L++) {
        int R = (n-2) - L;
 
        long long leftWays = (L == 0) ? 1 : 3 * binpow(4, L-1);
        long long rightWays = (R == 0) ? 1 : 3 * binpow(4, R-1);
 
        ans += leftWays * rightWays;
    }
 
    ans *= 4;
 
    cout << ans << endl;
}