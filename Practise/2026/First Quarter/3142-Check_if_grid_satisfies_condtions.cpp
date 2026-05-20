#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        for(int j =  0 ;j<col;j++){
            int val = grid[0][j];
            for(int i = 1;i<row;i++){
                if(grid[i][j]!=val){
                    return false;
                }
            }
        }
        for(int j =1 ;j<col;j++){
            if(grid[0][j]==grid[0][j-1]){
                return false;
            }
        }
        return true;
    }
};