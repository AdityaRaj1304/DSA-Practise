#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int mem(vector<vector<int>>&grid,vector<vector<vector<int>>>&dp,int x, int y,int cost,int m,int n){
        if(x>=m||y>=n){
            return INT_MAX;
        }
        cost^=grid[x][y];
        if(x==m-1&&y==n-1){
            return cost;
        }
        if(dp[x][y][cost]!=-1){
            return dp[x][y][cost];
        }
        int right = mem(grid,dp,x+1,y,cost,m,n);
        int down = mem(grid,dp,x,y+1,cost,m,n);
        return dp[x][y][cost]=min(right,down);
    }
    int minCost(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(1024,-1)));
        return mem(grid,dp,0,0,0,m,n);
    }
};