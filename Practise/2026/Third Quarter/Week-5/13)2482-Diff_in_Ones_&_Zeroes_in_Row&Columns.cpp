#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>rowOne(m,0),colOne(n,0);
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]){
                    rowOne[i]++;
                    colOne[j]++;
                }
            }
        }
        vector<vector<int>>ans(m,vector<int>(n,0));
        int total = m+n;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                ans[i][j]=2*(rowOne[i]+colOne[j])-total;
            }
        }
        return ans;
    }
};