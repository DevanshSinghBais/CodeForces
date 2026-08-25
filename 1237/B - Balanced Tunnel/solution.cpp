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
    int a[n], b[n];
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        q.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int fine = 0;
    vector<bool> removed(n + 1, false);
    for (int i = 0; i < n; i++)
    {
        while (!q.empty() && removed[q.front()])
            q.pop();
 
        if (q.front() == b[i])
        {
            q.pop();
        }
        else
        {
            fine++;
            removed[b[i]] = true;
        }
    }
    cout << fine << endl;
 
    return 0;
}