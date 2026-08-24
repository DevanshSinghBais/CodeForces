#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, x;
        cin >> n >> x;
 
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        long long total = 0;
        long long sum = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (v[i] % x == 0)
            {
                total += v[i] / x;
            }
            else
            {
                total += v[i] / x + 1;
            }
            sum += v[i];
        }
 
        if(sum%x==0)
        {
            cout<<sum/x<<" "<<total<<endl;
        }
        else
        {
            cout<<(sum/x)+1<<" "<<total<<endl;
        }
 
        
        
    }
    return 0;
}