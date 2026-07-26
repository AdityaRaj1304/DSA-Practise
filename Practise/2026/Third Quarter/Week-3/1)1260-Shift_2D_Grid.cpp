#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int n = row*col;
        vector<int>arr(n,0);
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                int idx = ((i*col)+j+k)%n;
                arr[idx]=grid[i][j];
            }
        }
        int idx=0;
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                grid[i][j]=arr[idx++];
            }
        }
        return grid;
    }
};