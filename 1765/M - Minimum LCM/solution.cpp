#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t, n;
    cin >> t;
 
    while(t--)
    {
        cin >> n;
 
        long long smallest_divisor = -1;
 
        for(long long i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                smallest_divisor = i;
                break;
            }
        }
 
        if(smallest_divisor == -1)
        {
            // n is prime
            cout << 1 << " " << n-1 << "
";
        }
        else
        {
            long long a = n / smallest_divisor;
            long long b = n - a;
            cout << a << " " << b << "
";
        }
    }
 
    return 0;
}