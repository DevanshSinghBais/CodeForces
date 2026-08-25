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
        int n,q;
        cin>>n>>q;
        vector<long long>a(n),v(n),presum(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        v[0] = a[0];
        presum[0] = a[0];
        for(int i = 1;i<n;i++)
        {
            v[i] = max(v[i-1],a[i]);
            presum[i] = presum[i-1] + a[i];
        }
        while(q--)
        {
            long long k;
            cin>>k;
            int idx = upper_bound(v.begin(),v.end(),k) - v.begin();
            idx = idx - 1;
            if(idx==-1)cout<<0<<" ";
            else
            {
                cout<<presum[idx]<<" ";
            }
        }
        cout<<endl;
    }
 
    return 0;
}