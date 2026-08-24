#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
 
        int p = r / (b + 1);
        int q = r % (b + 1);
 
        string s = "";
 
        for(int i = 0; i < b + 1; i++)
        {
            // base R's
            s.append(p, 'R');
 
            // distribute extra R
            if(q > 0)
            {
                s.push_back('R');
                q--;
            }
 
            // add B except after last block
            if(i < b)
                s.push_back('B');
        }
 
        cout << s << endl;
    }
 
    return 0;
}