#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> v(n);
 
        bool found = false;
 
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 67)
                found = true;
        }
 
        if(found)
            cout << "YES
";
        else
            cout << "NO
";
    }
    return 0;
}