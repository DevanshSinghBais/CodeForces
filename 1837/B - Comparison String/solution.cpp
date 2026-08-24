#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int maxRun = 1, curRun = 1;
        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1])
                curRun++;
            else
                curRun = 1;
            maxRun = max(maxRun, curRun);
        }
        cout << maxRun + 1 << endl;
    }
}