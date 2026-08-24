#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,n;
        scanf("%lld %lld %lld",&a,&b,&n);
        if(n <= a/b || a == b) printf("1
");
        else printf("2
");
    }
}