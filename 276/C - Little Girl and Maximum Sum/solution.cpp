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
 
    int n,q;
    cin >> n >> q;
 
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    sort(a, a + n, greater<int>());
 
    vector<ll> f(n + 1, 0);
 
    int l,r;
    while(q--)
    {
        cin >> l >> r;
        f[l - 1]++;
        if(r < n)
        {
            f[r]--;
        }
    }
 
    for(int i = 1; i < n; i++)
    {
        f[i] += f[i - 1];
    }
 
    f.pop_back();
 
    sort(f.begin(), f.end(), greater<ll>());
 
    ll sum = 0;
 
    for(int i = 0; i < n; i++)
    {
        sum += 1LL * a[i] * f[i];
    }
 
    cout << sum << endl;
 
    return 0;
}