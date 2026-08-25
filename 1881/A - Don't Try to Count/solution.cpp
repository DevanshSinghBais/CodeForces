#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int moves = 0;
 
        
        while(x.length() < s.length())
        {
            x += x;
            moves++;
        }
 
        
        if(x.find(s) != string::npos)
        {
            cout << moves << endl;
            continue;
        }
 
        
        x += x;
        moves++;
 
        if(x.find(s) != string::npos)
        {
            cout << moves << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}