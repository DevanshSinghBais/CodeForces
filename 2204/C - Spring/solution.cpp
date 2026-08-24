#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll lcmll(ll a, ll b){
    return a / __gcd(a,b) * b;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--){
        ll a,b,c,m;
        cin >> a >> b >> c >> m;
 
        ll A = m/a;
        ll B = m/b;
        ll C = m/c;
 
        ll ab_l = lcmll(a,b);
        ll ac_l = lcmll(a,c);
        ll bc_l = lcmll(b,c);
        ll abc_l = lcmll(ab_l,c);
 
        ll AB = m/ab_l;
        ll AC = m/ac_l;
        ll BC = m/bc_l;
        ll ABC = m/abc_l;
 
        ll all3 = ABC;
 
        ll ab = AB - ABC;
        ll ac = AC - ABC;
        ll bc = BC - ABC;
 
        ll onlyA = A - AB - AC + ABC;
        ll onlyB = B - AB - BC + ABC;
        ll onlyC = C - AC - BC + ABC;
 
        ll alice = 6*onlyA + 3*(ab + ac) + 2*all3;
        ll bob   = 6*onlyB + 3*(ab + bc) + 2*all3;
        ll carol = 6*onlyC + 3*(ac + bc) + 2*all3;
 
        cout << alice << " " << bob << " " << carol << "
";
    }
}