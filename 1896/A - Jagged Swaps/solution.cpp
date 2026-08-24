#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        
        sort(b.begin(), b.end());
        
        // Key observation: if a[0] is already the minimum, we can always sort
        // Otherwise, we can never move the first element
        if (a[0] == b[0]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}