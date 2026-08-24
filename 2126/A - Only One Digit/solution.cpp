#include <iostream>
using namespace std;
int main()
{
    int t, x, d, f = 0, ans;
    cin >> t;
    while (t--)
    {
        cin >> x;
        while (x > 0)
        {
            d = x % 10;
            x = x / 10;
            if (!f || ans > d)
            {
                ans = d;
                f++;
            }
        }
        f = 0;
        cout << ans << endl;
    }
    return 0;
}