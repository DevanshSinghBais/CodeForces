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
 
        vector<pair<long long, long long>> nums(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i].first;
            nums[i].second = i + 1;
        }
 
        sort(nums.begin(), nums.end());
 
        int answer = 0;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (nums[i].first * nums[j].first >= 2 * n)
                    break;
 
                if (nums[i].first * nums[j].first == nums[i].second + nums[j].second)
                    answer++;
            }
        }
 
        cout << answer << "
";
    }
 
    return 0;
}