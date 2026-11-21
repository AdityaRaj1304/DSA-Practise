#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int cnt =0;
                if(grid[i][j]!=grid[i+1][j]){
                    cnt++;
                }
                if(grid[i][j]!=grid[i][j+1]){
                    cnt++;
                }
                if(grid[i][j]!=grid[i+1][j+1]){
                    cnt++;
                }
                if(cnt==0||cnt==1||cnt==3){
                    return true;
                }
            }
        }
        return false;
    }
};