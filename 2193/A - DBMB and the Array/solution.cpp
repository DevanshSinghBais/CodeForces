#include <iostream>
using namespace std;
int main()
{
    int t, n, s, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> x;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum > s && x >= 0)
        {
            cout << "NO" << endl;
        }
        else if (sum > s && x < 0)
        {
            if ((sum - s) % (-1 * x) == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (sum < s && x <= 0)
        {
            cout << "NO" << endl;
        }
        else if (sum == s)
        {
            cout << "YES" << endl;
        }
        else if (sum < s && x > 0)
        {
            if ((s - sum) % x == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}