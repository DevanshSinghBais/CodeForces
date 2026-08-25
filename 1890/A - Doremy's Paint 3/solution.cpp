#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        map<int,int> mpp;
 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mpp[a[i]]++;
        }
 
        if(mpp.size() == 1) {
            cout << "Yes
";
        }
        else if(mpp.size() == 2) {
            auto it = mpp.begin();
            int c1 = it->second;
            it++;
            int c2 = it->second;
 
            if(abs(c1 - c2) <= 1) cout << "Yes
";
            else cout << "No
";
        }
        else {
            cout << "No
";
        }
    }
}