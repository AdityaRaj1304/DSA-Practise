#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int shortestPath(int n, vector<vector<int>>& edges, string labels, int k) {
        vector<vector<pair<int,int>>>graph(n);
        for(auto &edge:edges){
            graph[edge[0]].push_back({edge[1],edge[2]});
        }
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
        vector<vector<int>>dist(n,vector<int>(k+1,INT_MAX));
        dist[0][1]=0;
        pq.push({0,0,1});
        while(!pq.empty()){
            auto node=pq.top();
            pq.pop();
            int d = node[0];
            int u =node[1];
            int cnt = node[2];
            if(d>dist[u][cnt]){
                continue;
            }
            if(u==n-1){
                return d;
            }
            for(auto&[v,w]:graph[u]){
                int currCnt = 1;
                if(labels[u]==labels[v]){
                    currCnt+=cnt;
                }
                if(currCnt>k){
                    continue;
                }
                if(dist[v][currCnt]>d+w){
                    dist[v][currCnt]=d+w;
                    pq.push({dist[v][currCnt],v,currCnt});
                }
            }
        }
        return -1;
    }
};