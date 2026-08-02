#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n = position.size();
        int odd = 0,even =0;
        for(int pos:position){
            if(pos%2==0){
                even++;
            }else{
                odd++;
            }
        }
        return min(odd,even);
    }
};

class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int ans =0;
        for(int i =1;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                ans+=grid[i][j]-grid[i-1][j]+1;
                grid[i][j]=grid[i-1][j]+1;
            }
        }
        return ans;
    }
};