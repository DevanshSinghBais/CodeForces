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
 
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int k = k1 + k2;
    priority_queue<int> pq;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        pq.push(abs(a[i] - b[i]));
    }
    while (k--)
    {
        int p = pq.top();
        pq.pop();
 
        pq.push(abs(p - 1));
    }
    ll sum = 0;
    while(!pq.empty())
    {
        sum += 1LL * pq.top() * pq.top();
        pq.pop();
    }
    cout<<sum<<endl;
 
    return 0;
}