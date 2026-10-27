#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
int bfs(vector<vector<int>>& grid, int r, int c) {
    int m = grid.size();
    int n = grid[0].size();
    queue<pair<int, int>> q;
    q.push({r, c});
    int sum = grid[r][c];
    grid[r][c] = 0; 
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nr = r + dx[i];
            int nc = c + dy[i];
            if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                grid[nr][nc] != 0) {
                sum += grid[nr][nc];
                grid[nr][nc] = 0;
                q.push({nr, nc});
            }
        }
    }
    return sum;
}
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans = 0;
        for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        if (grid[i][j] != 0) {
            int sum = bfs(grid, i, j);
            if(sum%k==0){
                ans++:
            }
        }
    }
}
    return ans;
    }
};