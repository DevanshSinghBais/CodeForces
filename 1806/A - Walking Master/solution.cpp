#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        int p = c - a;
        int q = d - b;
        if (q < 0 || p > q)
        {
            cout << -1 << endl;
        }
        else
        {
            if (p == 0 && q == 0)
            {
                cout << 0 << endl;
            }
            else if (p == 0)
            {
                cout << 2 * q << endl;
            }
            else if (p > 0)
            {
                if (p == q)
                {
                    cout << p << endl;
                }
                else
                {
                     cout<<2*q-p<<endl;
                }
            }
            else if (p < 0)
            {
                cout << 2 * q + (-1) * p << endl;
            }
        }
    }
    return 0;
}