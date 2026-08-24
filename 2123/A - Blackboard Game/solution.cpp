#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
 
        if(n % 4 == 0)
            cout<<"Bob
";
        else
            cout<<"Alice
";
    }
 
    return 0;
}