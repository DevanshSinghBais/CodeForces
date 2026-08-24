#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        string s;
        cin >> s;
 
        int sum = 0;
        for(char c : s)
            sum += (c - '0');
 
        if(sum <= 9) {
            cout << 0 << "
";
            continue;
        }
 
        int need = sum - 9;
 
        vector<int> reduction;
 
        for(int i = 0; i < s.size(); i++) {
            int d = s[i] - '0';
            if(i == 0)
                reduction.push_back(d - 1);  
            else
                reduction.push_back(d);      
        }
 
        sort(reduction.rbegin(), reduction.rend());
 
        int moves = 0;
        int reduced = 0;
 
        for(int r : reduction) {
            if(reduced >= need) break;
            reduced += r;
            moves++;
        }
 
        cout << moves << "
";
    }
}