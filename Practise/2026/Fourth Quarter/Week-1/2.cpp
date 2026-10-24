#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        int x = 0, y= 0;
        while(true){
            vis[x][y]=true;
            char move = grid[x][y];
            int r = x,c=y;
            if(move=='L'){
                c--;
            }else if(move=='R'){
                c++;
            }else if(move=='U'){
                x--;
            }else{
                x++;
            }
            if(r<0||c<0||r>=m||c>=n||vis[r][c]){
                return {x,y};
            }
            x=r;
            y=c;
        }
        return {};
    }
};