#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> n >> a >> b;
        if (n - a - b <= 1)
        {
            if (n - a - b == 1)
            {
                cout << "No" << endl;
            }
            else
            {
                if (a == n && b == n)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}