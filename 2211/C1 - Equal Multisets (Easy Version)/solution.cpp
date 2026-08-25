#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        
        // Free range: [L, R] (inclusive), only if n < 2k
        int L = n - k, R = k - 1;
        // If n >= 2k, L > R so free range is empty
        
        bool ok = true;
        
        // Check boundary positions
        for(int i = 0; i < n && ok; i++){
            if(i < L || i > R){ // boundary
                if(b[i] != -1 && b[i] != a[i]){
                    ok = false;
                }
            }
        }
        
        if(ok && L <= R){
            // Check free positions
            // Allowed values: {a[L], ..., a[R]}
            set<int> allowed;
            for(int i = L; i <= R; i++) allowed.insert(a[i]);
            
            set<int> used;
            for(int i = L; i <= R && ok; i++){
                if(b[i] != -1){
                    if(allowed.find(b[i]) == allowed.end()){
                        ok = false; // value not in allowed set
                    } else if(used.count(b[i])){
                        ok = false; // duplicate
                    } else {
                        used.insert(b[i]);
                    }
                }
            }
        }
        
        cout << (ok ? "YES" : "NO") << "
";
    }
    return 0;
}