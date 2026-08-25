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
        ll n, k;
        cin >> n >> k;
        if (k >= n)
        {
            cout << 1 << endl;
            continue;
        }
        long long ans = 1;
 
        for (long long i = 1; 1LL * i * i <= n; i++)
        {
            if (n % i == 0)
            {
 
                if (i <= k)
                    ans = max(ans, i);
 
                
                if (n / i <= k)
                    ans = max(ans, n / i);
            }
        }
 
        cout<<n/ans<<endl;
    }
 
    return 0;
}