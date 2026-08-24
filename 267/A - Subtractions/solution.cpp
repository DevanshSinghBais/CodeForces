#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
 
        long long ops = 0;
 
        while(a > 0 && b > 0)
        {
            if(a >= b)
            {
                ops += a / b;
                a %= b;
            }
            else
            {
                ops += b / a;
                b %= a;
            }
        }
 
        cout << ops << endl;
    }
}