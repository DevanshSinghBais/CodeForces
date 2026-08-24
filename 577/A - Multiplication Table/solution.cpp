#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, x;
    cin >> n >> x;
 
    int cnt = 0;
 
    for(long long i = 1; i <= n; i++)
    {
        if(i * n < x) continue;  
 
        if(x % i == 0)           
        {
            cnt++;
        }
    }
 
    cout << cnt << endl;
}