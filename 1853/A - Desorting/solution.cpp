#include <iostream>
#include <algorithm>
 
#include <climits>
using namespace std;
bool isunsorted(int a[], int n)
{
    int b[n];
    for (int i = 0; i < n; i++)
        b[i] = a[i];
 
    sort(b, b + n);
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
 
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (!isunsorted(a,n))
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = INT_MAX;
 
            for (int i = 1; i < n; i++)
            {
                ans = min(ans, abs(a[i] - a[i - 1]));
            }
            cout<<(ans/2)+1<<endl;
        }
    }
    return 0;
}