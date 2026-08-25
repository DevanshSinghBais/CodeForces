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
 
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    vector<ll> a;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    int pre = 0;
    a.push_back(sum);
    for (int i = k; i < n; i++)
    {
        sum += v[i];
        sum -= v[pre];
        pre++;
        a.push_back(sum);
    }
    long long ans = accumulate(a.begin(), a.end(), 0LL);
    cout << fixed << setprecision(10)
         << (double)ans / (n - k + 1) << endl;
 
    return 0;
}