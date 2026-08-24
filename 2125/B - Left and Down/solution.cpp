#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t,a,b,k;
    cin>>t;
 
    while(t--)
    {
        cin>>a>>b>>k;
 
        long long g = __gcd(a,b);   // correct
        long long x = a/g;
        long long y = b/g;
 
        if((k >= a && k >= b) || (x <= k && y <= k))
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
 
    return 0;
}