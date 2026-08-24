#include <iostream>
using namespace std;
int main()
{
    long long t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n % 2 != 0)
        {
            if ((n - (k )) % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}