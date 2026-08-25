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
        ll n,x;
        int m;
        cin>>n>>x>>m;
        ll i = x-1,j = x-1;
        while(m--)
        {
            ll l,r;
            cin>>l>>r;
            l = l-1;
            r = r-1;
            if(l<=i&&r>=j)
            {
                i = l,
                j = r;
            }
            else if(l<=i&&r<j&&r>=i)
            {
                i = l;
 
            }
            else if(i<l&&r>=j&&l<=j)
            {
                j = r;
            }
        }
        cout<<j-i+1<<endl;
 
    }
 
    return 0;
}