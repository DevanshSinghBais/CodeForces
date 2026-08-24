#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
 
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
 
        unordered_map<int,int> bestA, bestB;
 
        // Longest consecutive in a
        for(int i = 0; i < n; )
        {
            int j = i;
            while(j < n && a[j] == a[i]) j++;
            bestA[a[i]] = max(bestA[a[i]], j - i);
            i = j;
        }
 
        // Longest consecutive in b
        for(int i = 0; i < n; )
        {
            int j = i;
            while(j < n && b[j] == b[i]) j++;
            bestB[b[i]] = max(bestB[b[i]], j - i);
            i = j;
        }
 
        int ans = 0;
 
        for(auto &p : bestA)
        {
            int val = p.first;
            ans = max(ans, p.second + bestB[val]);
        }
 
        for(auto &p : bestB)
        {
            int val = p.first;
            ans = max(ans, p.second + bestA[val]);
        }
 
        cout << ans << "
";
    }
}