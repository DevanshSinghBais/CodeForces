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
 
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, h;
    cin >> n >> h;
 
    vi a;
    int ans = 0;
 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
 
        vi b = a;
        sort(all(b));
 
        int need = 0;
 
        
        for (int j = sz(b) - 1; j >= 0; j -= 2)
            need += b[j];
 
        if (need <= h)
            ans = i + 1;
        else
            break;
    }
 
    cout << ans << endl;
 
    return 0;
}