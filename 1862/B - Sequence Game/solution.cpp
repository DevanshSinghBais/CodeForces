#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];
 
        int a[2 * n];
        int idx = 0;
 
        a[idx++] = b[0];
 
        for (int i = 1; i < n; i++)
        {
            int last = a[idx - 1];
 
            if (b[i] > last)
            {
                a[idx++] = b[i];
            }
            else if (b[i] == last)
            {
                a[idx++] = b[i];
            }
            else
            {
                a[idx++] = 1;
                a[idx++] = b[i];
            }
        }
 
        cout << idx << endl;
        for (int i = 0; i < idx; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}