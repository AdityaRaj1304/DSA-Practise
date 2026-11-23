#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<long long> earliestActivationTimes(int n, vector<vector<int>>& edges, vector<int>& requiredSignals) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto &edge:edges){
            graph[edge[0]].push_back({edge[1],edge[2]});
        }
        vector<ll>ans(n,-1);
        priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>pq;
        vector<ll>signal(n,0);
        ans[0]=0;
        for(auto&[v,t]:graph[0]){
            pq.push({t,v});
        }
        while(!pq.empty()){
            auto[node,time]=pq.top();
            pq.pop();
            if(ans[node]!=-1){
                continue;
            }
            signal[node]++;
            if(signal[node]>=requiredSignals[node]){
                ans[node]=time;
                for(auto[v,d]:graph[node]){
                    pq.push({d+time,v});
                }
            }
        }
        return ans;
    }
};