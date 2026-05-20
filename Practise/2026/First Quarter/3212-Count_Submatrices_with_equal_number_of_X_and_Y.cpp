#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int ans = 0;
        int rows = grid.size() ;
        int col = grid[0].size();
        vector<int>sumX(col,0) , sumY(col,0);
        for(int i = 0 ;i<rows;i++){
            int X = 0,Y=0;
            for(int j = 0 ;j<col;j++){
                char ch  = grid[i][j];
                if(ch == 'X'){
                    X++;
                }else if(ch == 'Y'){
                    Y++;
                }
                sumX[j]+=X;
                sumY[j]+=Y;
                if(sumX[j]>0 && sumX[j]==sumY[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};