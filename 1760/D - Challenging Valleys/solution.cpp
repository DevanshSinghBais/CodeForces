#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        
        int count=0;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && a[j]==a[i]) j++;
            // flat block [i, j-1]
            bool leftOk = (i==0 || a[i-1]>a[i]);
            bool rightOk = (j==n || a[j]>a[i]);
            if(leftOk && rightOk) count++;
            i=j;
        }
        
        cout<<(count==1?"YES":"NO")<<"
";
    }
}