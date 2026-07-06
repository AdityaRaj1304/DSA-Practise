#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void adjacenyList(vector<vector<int>>&roads,vector<vector<pair<int,int>>>&graph){
        for(auto&road:roads){
            int u = road[0];
            int v = road[1];
            int wt = road[2];
            graph[u].push_back({v,wt});
            graph[v].push_back({u,wt});
        }
    }
    int bfs(vector<vector<pair<int,int>>>graph,vector<bool>&vis){
        queue<int>q;
        q.push(1);
        vis[1]=true;
        int ans = INT_MAX;
        while(q.size()>0){
            int curr = q.front();
            q.pop();
            for(auto&[v,wt]:graph[curr]){
                ans=min(ans,wt);
                if(!vis[v]){
                    q.push(v);
                    vis[v]=true;
                }
            }
        }
        return ans;
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>graph(n+1);
        adjacenyList(roads,graph);
        vector<bool>vis(n+1);
        int ans = bfs(graph,vis);
        return ans;
    }
};