#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    ll mod = 1e9+7;
    int m , n ;
    vector<vector<vector<int>>>dp;
    int mem(vector<vector<int>>&grid,int r , int c,int dir){
        if(r>=m||c>=n){
            return 0;
        }
        if(r==m-1&&c==n-1){
        return 1;
        }
        if(dp[r][c][dir]!=-1){
            return dp[r][c][dir];
        }
        if(grid[r][c]==1){
            if(dir==0){
                dp[r][c][dir]=mem(grid,r+1,c,1);
            }else{
                dp[r][c][dir]=mem(grid,r,c+1,0);
            }
        }else{
            dp[r][c][dir]=(mem(grid,r+1,c,1) + mem(grid,r,c+1,0))%mod;
        }
        return dp[r][c][dir];
    }
    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        dp.assign(m,vector<vector<int>>(n,{-1,-1}));
        return mem(grid,0,0,0);
    }
};