#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> a(n);
    long long sum = 0;
 
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
 
    int countWays = 0;
 
    for(int i = 0; i < n; i++)
    {
        if((sum - a[i]) % 2 == 0)
            countWays++;
    }
 
    cout << countWays;
 
    return 0;
}