#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, d;
    long long n;
    cin >> t;
    while(t--)
    {
        cin >> n >> d;
        
        // 1 always divides
        cout << 1 << " ";
        
        // 3: if 3|d OR n>=3
        if(d % 3 == 0 || n >= 3)
            cout << 3 << " ";
        
        // 5: only if d==5
        if(d == 5)
            cout << 5 << " ";
        
        // 7: if 7|d OR n>=3 (since 6|n! when n>=3)
        if(d == 7 || n >= 3)
            cout << 7 << " ";
        
        // 9: if 9|d, OR (3|d and n>=3), OR n>=6
        if(d == 9 || (d % 3 == 0 && n >= 3) || n >= 6)
            cout << 9 << " ";
        
        cout << endl;
    }
}