#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int row = boxGrid.size(), col = boxGrid[0].size();
        vector<vector<char>>ans(col,vector<char>(row,'.'));
        for(int i = 0;i<row;i++){
            int stone= 0;
            for(int j = 0;j<col;j++){
                if(boxGrid[i][j]=='#'){
                    stone++;
                }else if(boxGrid[i][j]=='*'){
                    ans[j][row-i-1]='*';
                    if(stone){
                        int temp = j-1;
                        for(int k =0;k<stone;k++){
                            ans[temp--][row-i-1]='#';
                        }
                        stone=0;
                    }
                }
            }
            if(stone){
                int temp = col-1;
                for(int k =0;k<stone;k++){
                    ans[temp--][row-i-1]='#';
                }
            }
        }
        return ans;
    }
};