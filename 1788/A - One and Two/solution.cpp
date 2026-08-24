#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
 
        int total2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2) total2++;
        }
 
        int pref2 = 0;
        int ans = -1;
 
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 2) pref2++;
 
            if (pref2 * 2 == total2)
            {
                ans = i + 1; // split index
                break;
            }
        }
 
        cout << ans << "
";
    }
    return 0;
}