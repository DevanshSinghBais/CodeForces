#include <iostream>
using namespace std;
int main()
{
    int t, n, team1 = 0, team2 = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        team1 += n / 2;
        team2 += n / 2;
        if (n == 2 || n == 3)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - team1 - team2 << endl;
        }
        team1 = 0, team2 = 0;
    }
    return 0;
}