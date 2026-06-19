#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int ans = 0;
        int team =0;
        for(int i = 0;i<grid.size();i++){
            int count = 0;
            for(int j =0;j<grid[i].size();j++){
                if(i==j){
                    continue;
                }
                if(grid[i][j]==1){
                    count++;
                }
            }
            if(count>ans){
                team=i;
                ans = count;
            }
        }
        return team;
    }
};