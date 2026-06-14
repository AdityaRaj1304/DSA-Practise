#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const long long MOD = 1e9+7;
    long long modPow(long long a , long long b){
        long long ans = 1;
        while(b){
            if(b&1){
                ans = ans * a % MOD;
            }
            a = a * a % MOD;
            b>>=1;
        }
        return ans;
    }
    void adjacencyList(vector<vector<int>>&edges,vector<vector<int>>&graph){
        for(auto &edge:edges){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
    }
    int dfs(vector<vector<int>>&tree,int src , int par){
        int ans = 0;
        for(int v : tree[src]){
            if(v!=par){
                ans=max(ans,1+dfs(tree,v,src));
            }
        }
        return ans;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<vector<int>>graph(n+2);
        adjacencyList(edges,graph);
        int depth =dfs(graph,1,-1);
        return modPow(2,depth-1);
    }
};





