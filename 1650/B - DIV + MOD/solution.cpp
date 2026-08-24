#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,a,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r>>a;
        long long best = r/a + r%a;
        long long k = r%a;
        
        long long x = r - k - 1; 
        if(x >= l){
            best = max(best, x/a + x%a);
        }
        cout << best << "
";
    }
}