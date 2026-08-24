#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        map<int, int> freq;
 
        for (int i = 0; i < n; i++)
            freq[a[i]]++;
 
        int maxFreq = 0;
 
        for (auto it : freq)
            maxFreq = max(maxFreq, it.second);
 
        if (maxFreq == n)
        {
            cout << 0 << endl;
            continue;
        }
 
        int count = 0;
 
        while (maxFreq < n)
        {
            count++;  // copy operation
 
            int add = min(maxFreq, n - maxFreq);
            count += add;
 
            maxFreq += add;
        }
 
        cout << count << endl;
    }
 
    return 0;
}