#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> nums(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            nums[i] -= i;
        }
 
        map<long long, long long> mpp;
 
        for (int i = 0; i < n; i++)
            mpp[nums[i]]++;
 
        long long answer = 0;
 
        for (auto &[value, count] : mpp)
        {
            answer += (count * (count - 1)) / 2;
        }
 
        cout << answer << "
";
    }
 
    return 0;
}