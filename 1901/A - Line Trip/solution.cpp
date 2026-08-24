#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        
        int maxGap = a[0]; // Distance from 0 to first point
        
        // Check all gaps between consecutive points
        for (int i = 1; i < n; i++)
        {
            maxGap = max(maxGap, a[i] - a[i-1]);
        }
        
        // Distance from last point to x and back
        maxGap = max(maxGap, 2 * (x - a[n-1]));
        
        cout << maxGap << endl;
    }
    return 0;
}