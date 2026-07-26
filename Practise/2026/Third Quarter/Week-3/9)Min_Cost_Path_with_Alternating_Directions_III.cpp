#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long minCost(int m, int n, vector<vector<int>>& penalty) {
        vector<vector<vector<ll>>> dist(m, vector<vector<ll>>(n, vector<ll>(2, LLONG_MAX)));
        priority_queue<vector<ll>,vector<vector<ll>>,greater<vector<ll>>>pq;
        dist[0][0][1]=1;
        pq.push({1,0,0,1});
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};
        while(pq.size()>0){
            auto v = pq.top();
            pq.pop();
            ll cost = v[0];
            int row = v[1] , col = v[2] , par = v[3];
            if(cost>dist[row][col][par]){
                continue;
            }
            if(row==m-1 && col == n-1){
                return cost;
            }
            ll wait = cost + penalty[row][col];
            if(wait<dist[row][col][1-par]){
                dist[row][col][1-par]=wait;
                pq.push({wait,row,col,1-par});
            }
            for(int i =0;i<4;i++){
                int nr= row + dx[i];
                int nc = col + dy[i];
                if(nr>=0 && nr<m && nc>=0 && nc<n){
                    ll dest = (ll)(nr+1)*(nc+1);
                    ll move = cost + dest;
                    bool correct = (par==1 && (i==0||i==1) || par==0 &&(i==2||i==3));
                    if(!correct){
                        move+=penalty[row][col];
                    }
                    if(move<dist[nr][nc][1-par]){
                        dist[nr][nc][1-par]=move;
                        pq.push({move,nr,nc,1-par});
                    }
                }
            }
        }
        return -1;
    }
};
            


