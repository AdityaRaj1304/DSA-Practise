#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int row1 = x , row2 = x+k-1;
        while(row1<row2){
            for(int j = y;j<y+k;j++){
                swap(grid[row1][j],grid[row2][j]);
            }
            row1++,row2--;
        }
        return grid;
    }
};