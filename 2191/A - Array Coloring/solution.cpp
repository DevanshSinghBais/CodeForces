#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // Create sorted version with indices
        vector<pair<int, int>> sorted_with_orig_idx;
        for (int i = 0; i < n; i++)
        {
            sorted_with_orig_idx.push_back({a[i], i});
        }
        sort(sorted_with_orig_idx.begin(), sorted_with_orig_idx.end());
        
        // Check parity consistency
        bool valid = true;
        int parity_type = -1; // -1: not set, 0: same parity, 1: opposite parity
        
        for (int i = 0; i < n; i++)
        {
            int orig_pos = sorted_with_orig_idx[i].second;
            int sorted_pos = i;
            
            int current_parity = (orig_pos % 2) == (sorted_pos % 2) ? 0 : 1;
            
            if (parity_type == -1)
            {
                parity_type = current_parity;
            }
            else if (parity_type != current_parity)
            {
                valid = false;
                break;
            }
        }
        
        if (valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}