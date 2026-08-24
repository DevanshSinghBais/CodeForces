#include <bits/stdc++.h>
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
 
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
 
        vector<int> ans(n);
 
        bool ok = true;
 
        for(int i = 0; i < n; )
        {
            int j = i;
 
            while(j < n && v[j] == v[i]) j++;
 
            if(j - i == 1)
            {
                ok = false;
                break;
            }
 
            for(int k = i; k < j - 1; k++)
                ans[k] = k + 2;
 
            ans[j - 1] = i + 1;
 
            i = j;
        }
 
        if(!ok)
        {
            cout << -1 << "
";
            continue;
        }
 
        for(int x : ans) cout << x << " ";
        cout << "
";
    }
}