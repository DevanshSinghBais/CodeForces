#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ones = count(s.begin(), s.end(), '1');
        int zeros = s.size() - ones;
        int moves = min(ones, zeros);
 
        if(moves%2)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
}