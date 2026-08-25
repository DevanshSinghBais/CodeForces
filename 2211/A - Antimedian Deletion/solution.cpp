#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(auto &x:p) cin>>x;
        for(int i=0;i<n;i++){
            cout<<(n==1?1:2);
            if(i<n-1) cout<<" ";
        }
        cout<<"
";
    }
}