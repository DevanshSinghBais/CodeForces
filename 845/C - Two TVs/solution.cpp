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
 
    int n;
    cin >> n;
    ll l[n], r[n];
    vector<pll> v;
    int i = 0;
    while (n--)
    {
        cin >> l[i] >> r[i];
 
        v.push_back({l[i], r[i]});
        i++;
    }
    sort(v.begin(), v.end());
    bool poss = true;
    int e1 = INT_MIN, e2 = INT_MIN;
    for (auto &it : v)
    {
        if (it.first > e1)
        {
            e1 = it.second;
        }
        else
        {
            if (it.first > e2)
            {
                e2 = it.second;
            }
            else
            {
                poss = false;
                cout << "NO" << endl;
                break;
            }
        }
    }
    if (poss)
    {
        cout << "YES" << endl;
    }
 
    return 0;
}