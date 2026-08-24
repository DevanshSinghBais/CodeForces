#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++;
                if (maxcount < count)
                {
                    maxcount = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << maxcount;
 
        cout << endl;
    }
    return 0;
}