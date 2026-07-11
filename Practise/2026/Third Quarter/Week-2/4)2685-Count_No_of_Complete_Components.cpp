#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void adjacencyList(vector<vector<int>>&edges,vector<vector<int>>&graph){
        for(auto&edge:edges){
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
            }
        }

        void dfs(vector<vector<int>>&graph,int src,vector<bool>&vis,int &degree,int &vertices){
            vis[src]=true;
            vertices++;
            degree+=graph[src].size();
            for(auto &v:graph[src]){
                if(!vis[v]){
                    dfs(graph,v,vis,degree,vertices);
                }
            }
        }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>graph(n);
        adjacencyList(edges,graph);
        vector<bool>vis(n,false);
        int ans=0;
        for(int i =0;i<n;i++){
            int degree = 0;
            int vertices =0;
            if(!vis[i]){
                dfs(graph,i,vis,degree,vertices);
                int edge = degree/2;
                if(edge == (vertices*(vertices-1))/2){
                    ans++;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first =0 , second = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>first){
                first=nums[i];
                ans=i;
            }else if(nums[i]>second){
                second = nums[i];
            }
        }
        if(first>=2*second){
            return ans;
        }
        return -1;
    }
};