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
 
        string s;
        cin >> s;  
 
        int p = 0, q = n - 1;
        int length = n;
 
        while (p <= q)
        {
            if (s[p] != s[q])
            {
                length -= 2;
                p++;
                q--;
            }
            else
            {
                break;
            }
        }
 
        cout << length << endl;
    }
    return 0;
}