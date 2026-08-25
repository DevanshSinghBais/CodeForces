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
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int ans = 0;
        int cnt = 0;
 
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '#')
            {
                cnt++;
            }
            else
            {
                ans = max(ans, (cnt + 1) / 2);
                cnt = 0;
            }
        }
 
        ans = max(ans, (cnt + 1) / 2);
 
        cout << ans << endl;
    }
 
    return 0;
}