#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int a, b;
    int xk, yk;
    int xq, yq;
 
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;
 
    set<pair<int,int>> moves;
 
    // Generate all 8 possible knight-type moves
    vector<pair<int,int>> directions = {
        { a,  b}, { a, -b},
        {-a,  b}, {-a, -b},
        { b,  a}, { b, -a},
        {-b,  a}, {-b, -a}
    };
 
    for (auto d : directions) {
        moves.insert({xk + d.first, yk + d.second});
    }
 
    int fork = 0;
 
    // Check if queen is at knight distance from these positions
    for (auto [px, py] : moves) {
        int dx = abs(xq - px);
        int dy = abs(yq - py);
 
        if ((dx == a && dy == b) || (dx == b && dy == a))
            fork++;
    }
 
    cout << fork << endl;
    }
 
    return 0;
}