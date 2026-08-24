#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    
    int win = 0;
    int left = 0, right = n - 1;
    
    while(left <= right) {
        long long strongest = v[right];
        long long need = d / strongest + 1;
        
        if((right - left + 1) >= need) {
            left += (need - 1);
            right--;
            win++;
        } else {
            break;
        }
    }
    cout << win << "
";
    return 0;
}