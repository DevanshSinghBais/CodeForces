#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ull = unsigned long long;
using ld = long double;
 
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define endl '
'
 
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        ll n;
        cin >> n;
 
        ll a = -1, b = -1, c;
 
        // Find first factor
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                n /= i;
                break;
            }
        }
 
                for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && i != a)
            {
                b = i;
                n /= i;
                break;
            }
        }
 
        c = n;
 
        if (a != -1 && b != -1 && c > 1 && c != a && c != b)
        {
            cout << "YES
";
            cout << a << " " << b << " " << c << "
";
        }
        else
        {
            cout << "NO
";
        }
    }
 
    return 0;
}