#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> mn;
        vector<int> secmn;
 
        for(int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
 
            vector<int> a(m);
 
            for(int j = 0; j < m; j++)
            {
                cin >> a[j];
            }
 
            sort(a.begin(), a.end());
 
            mn.push_back(a[0]);
            secmn.push_back(a[1]);
        }
 
        long long sum = 0;
 
        int smallestmn = 1e9;
        int smallestsecmn = 1e9;
 
        for(int i = 0; i < n; i++)
        {
            sum += secmn[i];
 
            smallestmn = min(smallestmn, mn[i]);
            smallestsecmn = min(smallestsecmn, secmn[i]);
        }
 
        sum = sum - smallestsecmn + smallestmn;
 
        cout << sum << endl;
    }
}