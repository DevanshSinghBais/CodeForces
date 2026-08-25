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
        int n, m;
        cin >> n >> m;
 
        vector<int> v(m);
        for (int i = 0; i < m; i++)
            cin >> v[i];
 
        sort(v.begin(), v.end());
 
        vector<int> gaps;
        for (int i = 0; i < m - 1; i++)
        {
            gaps.push_back(v[i + 1] - v[i] - 1);
        }
 
        gaps.push_back(v[0] + n - v[m - 1] - 1);
 
        sort(gaps.rbegin(), gaps.rend());
 
        int numSaved = 0, numDays = 0;
 
        for (auto gap : gaps)
        {
            int currGap = gap - numDays * 2;
            if (currGap > 0)
            {
                numSaved++;
 
                currGap -= 2;
                if (currGap > 0)
                    numSaved += currGap;
 
                numDays += 2;
            }
        }
 
        cout << (n - numSaved) << "
";
    }
 
    return 0;
}