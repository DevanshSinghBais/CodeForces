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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll moves = 0, x = 0;
        int i = 0, j = n - 1;
        while (i < j)
        {
 
            if (a[i] + x >= a[j])
            {
                int req = a[j] - x;
                a[i] = a[i] - req;
                moves += req;
                a[j] = 0;
                moves++;
                x = 0;
                j--;
                if (!a[i])
                {
                    i++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
 
                moves += a[i];
                x += a[i];
                a[i] = 0;
                i++;
            }
        }
        if (a[i])
        {
            if (x >= a[i])
            {
                moves++;
            }
            else
            {
                ll rem = a[i] - x;
 
                if (rem & 1)
                {
                    moves += rem / 2;
                    if (x + rem / 2 > 0)
                        moves++;
                    moves++;
                }
                else
                {
                    moves += rem / 2 + 1;
                }
            }
            a[i] = 0;
        }
        cout << moves << endl;
    }
 
    return 0;
}