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
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int n;
        cin >> n;
 
        map<int, int> mpp;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mpp[x]++;
        }
 
        vector<int> v;
 
        for (auto &it : mpp)
            v.push_back(it.second);
 
        sort(v.begin(), v.end(), greater<int>());
 
        ll sum = 0;
        int last = INT_MAX;
 
        for (int i = 0; i < v.size(); i++)
        {
            int take = min(v[i], last - 1);
 
            if (take <= 0)
                break;
 
            sum += take;
            last = take;
        }
 
        cout << sum << endl;
    }
 
    return 0;
}