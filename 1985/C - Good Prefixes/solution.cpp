#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        
        long long sum = 0, maxVal = 0;
        int cnt = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += a[i];
            maxVal = max(maxVal, a[i]);
            
            // Good if max element == sum of all others
            // i.e., 2 * max == total sum
            if(2 * maxVal == sum) cnt++;
        }
        cout << cnt << "
";
    }
}