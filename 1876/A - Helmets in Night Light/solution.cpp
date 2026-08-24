#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        vector<pair<int,int>> people(n);
        for(int i=0;i<n;i++) people[i] = {b[i], a[i]};
        sort(people.begin(), people.end());
        
        long long cost = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        
        int i = 0;
        int remaining = n;
        
        while(remaining > 0)
        {
            int cheapest_slot = pq.empty() ? INT_MAX : pq.top().first;
            
            if(cheapest_slot < p && i < n && people[i].first <= cheapest_slot)
            {
                cost += cheapest_slot;
                auto [sc, cnt] = pq.top(); pq.pop();
                if(cnt > 1) pq.push({sc, cnt-1});
                pq.push({people[i].first, people[i].second});
                remaining--;
                i++;
            }
            else if(cheapest_slot < p)
            {
                cost += cheapest_slot;
                auto [sc, cnt] = pq.top(); pq.pop();
                if(cnt > 1) pq.push({sc, cnt-1});
                pq.push({people[i].first, people[i].second});
                remaining--;
                i++;
            }
            else
            {
                if(i < n && people[i].first < p)
                {
                    cost += p;
                    pq.push({people[i].first, people[i].second});
                    remaining--;
                    i++;
                }
                else
                {
                    cost += (long long)p * remaining;
                    remaining = 0;
                }
            }
        }
        cout<<cost<<"
";
    }
}