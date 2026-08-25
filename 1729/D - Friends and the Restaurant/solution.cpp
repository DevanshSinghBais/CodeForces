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
        cin>>n;
        vector<long long>x(n),y(n),p(n);
        for(int i = 0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int i = 0;i<n;i++)
        {
            cin>>y[i];
            p[i] = y[i] - x[i];
        }
        sort(p.begin(),p.end());
        int i = 0, j = n-1;
        int cnt = 0;
        while(i<j)
        {
            if(p[i]+p[j]>=0)
            {
                i++;
                j--;
                cnt++;
            }
            else
            {
                i++;
            }
 
        }
        cout<<cnt<<endl;
    
    }
 
    return 0;
}