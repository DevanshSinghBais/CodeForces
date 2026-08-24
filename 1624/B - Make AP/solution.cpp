#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
 
        // Case 1: modify b
        if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
        {
            cout << "YES
";
            continue;
        }
 
        // Case 2: modify c
        if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
        {
            cout << "YES
";
            continue;
        }
 
        // Case 3: modify a
        if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
        {
            cout << "YES
";
            continue;
        }
 
        cout << "NO
";
    }
 
    return 0;
}