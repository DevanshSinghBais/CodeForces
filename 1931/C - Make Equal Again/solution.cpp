#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        int pre = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[0])
                pre++;
            else
                break;
        }
 
        int suff = 1;
        for(int i = n-2; i >= 0; i--)
        {
            if(a[i] == a[n-1])
                suff++;
            else
                break;
        }
 
        if(a[0] == a[n-1])
            cout << max(0, n - pre - suff) << "
";
        else
            cout << n - max(pre, suff) << "
";
    }
}