#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size() , n= matrix[0].size();
        vector<int>col;
        for(int j=0;j<n;j++){
            int idx =0;
            int maxm =matrix[0][j];
            for(int i=1;i<m;i++){
                if(matrix[i][j]>maxm){
                    idx=i;
                    maxm=matrix[i][j];
                }
            }
            col.push_back(idx);
        }
        unordered_map<int,int>row;
        vector<int>ans;
        for(int j=0;j<n;j++){
            if(row.find(col[j])!=row.end()){
                if(row[col[j]]==j){
                    ans.push_back(matrix[col[j]][j]);
                }
            }else{
                int idx =0;
                int minm = INT_MAX;
                int r = col[j];
                for(int c=0;c<n;c++){
                    if(matrix[r][c]<minm){
                        idx=c;
                        minm=matrix[r][c];
                    }
                }
                if(idx==j){
                    ans.push_back(matrix[r][j]);
                }
                row[r]=idx;
            }
        }
        return ans;
    }
};


