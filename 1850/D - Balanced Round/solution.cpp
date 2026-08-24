#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
 
        int cnt = 1;        // current group size
        int maxcnt = 1;     // max group size
 
        for(int i = 1; i < n; i++)
        {
            if(a[i] - a[i-1] <= k)
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
 
            maxcnt = max(maxcnt, cnt);
        }
 
        cout << n - maxcnt << endl;
    }
 
    return 0;
}