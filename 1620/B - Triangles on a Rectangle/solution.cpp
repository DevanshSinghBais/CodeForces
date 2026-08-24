#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long w,h;
        cin>>w>>h;
        
        // Read 4 sides
        // bottom (y=0): x coords
        // top (y=h): x coords  
        // left (x=0): y coords
        // right (x=w): y coords
        
        long long xb1,xbk,xt1,xtk,yl1,ylk,yr1,yrk;
        int k; long long v;
        
        auto readSide = [&](long long &first, long long &last){
            cin>>k;
            for(int i=0;i<k;i++){
                cin>>v;
                if(i==0) first=v;
                if(i==k-1) last=v;
            }
        };
        
        readSide(xb1,xbk);
        readSide(xt1,xtk);
        readSide(yl1,ylk);
        readSide(yr1,yrk);
        
        long long ans = 0;
        
        // Two points on bottom (y=0), third on top/left/right
        {
            long long base = xbk - xb1;
            long long best_h = max({h, ylk, yrk});
            ans = max(ans, base * best_h);
        }
        // Two points on top (y=h), third on bottom/left/right
        {
            long long base = xtk - xt1;
            long long best_h = max({h, h-yl1, h-yr1});
            ans = max(ans, base * best_h);
        }
        // Two points on left (x=0), third on right/bottom/top
        {
            long long base = ylk - yl1;
            long long best_h = max({w, xbk, xtk});
            ans = max(ans, base * best_h);
        }
        // Two points on right (x=w), third on left/bottom/top
        {
            long long base = yrk - yr1;
            long long best_h = max({w, w-xb1, w-xt1});
            ans = max(ans, base * best_h);
        }
        
        cout << ans << "
";
    }
    return 0;
}