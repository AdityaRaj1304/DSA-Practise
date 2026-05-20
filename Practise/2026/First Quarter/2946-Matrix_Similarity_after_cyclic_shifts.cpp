#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int row = mat.size() , col = mat[0].size();
        for(int i = 0 ;i<row;i++){
            vector<int>temp(col,0);
            if(row%2==0){
                for(int j = 0 ;j<col;j++){
                    temp[(j+k)%col]=mat[i][j];
                }
            }else{
                for(int j = 0 ;j<col;j++){
                    temp[j]=mat[i][(j+k)%col];
                }
            }
            if(temp!=mat[i]){
                return false;
            }
        }
        return true;
    }
};