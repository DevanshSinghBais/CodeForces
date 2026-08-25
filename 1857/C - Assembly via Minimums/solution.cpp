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
 
        int n;
        cin >> n; 
 
        
        int m = (n * (n - 1)) / 2;
 
        vector<int> v(m); 
        for (int i = 0; i < m; i++)
            cin >> v[i]; 
 
        sort(v.begin(), v.end()); 
        int mx = v[m-1];
 
        int x = n - 1, i = 0;
 
        
        while (x > 0)
        {
            cout << v[i] << " "; 
 
            i += x; 
            x--;    
        }
 
        cout <<v[m-1]<<endl;
    }
 
    return 0;
}