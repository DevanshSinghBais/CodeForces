#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int freq[1001] = {0};
 
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
 
    int max_height = 0, towers = 0;
 
    for(int i = 1; i <= 1000; i++)
    {
        if(freq[i] > 0)
        {
            towers++;
            max_height = max(max_height, freq[i]);
        }
    }
 
    cout << max_height << " " << towers;
}