#include<bits/stdc++.h>
using namespace std;
 
long long getLayersmax(long long x,long long y)
{
    long long layers = 0;
    long long i = 0;
 
    while(true)
    {
        long long val = (1LL << i);
 
        if(val > x) break;
 
        x -= val;
        layers++;
        i += 1;
        val = (1LL << i);
        if(val>y)break;
        y-=val;
        layers++;
        i++;
    }
 
    return layers;
}
 
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
 
        long long layers1 = getLayersmax(a,b);
        long long layers2 = getLayersmax(b,a);
 
        long long best = max(layers1, layers2);
 
        cout <<  best  << endl;
    }
 
    return 0;
}