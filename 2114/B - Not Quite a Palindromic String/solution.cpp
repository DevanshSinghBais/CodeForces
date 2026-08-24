#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
 
        vector<int> v;
        for (char c : s)
            v.push_back(c - '0');
 
        int countp = 0, countq = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                countp++;
            else
                countq++;
        }
        if (k == 0 && countp == countq)
        {
            cout << "YES" << endl;
        }
        else if (k == 0 && countp != countq)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (countp == countq && k % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else if (countp == countq && k % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                int pair = 0;
                while (pair < k)
                {
                    if (countp > countq)
                    {
 
                        if (pair < k)
                        {
                            countp -= 2;
                            pair++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if (countp < countq)
                    {
 
                        if (pair < k)
                        {
                            countq -= 2;
                            pair++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if (countp == countq)
                    {
 
                        if (pair < k)
                        {
                            countp -= 2;
                            pair++;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if (pair == k && countp == countq)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}