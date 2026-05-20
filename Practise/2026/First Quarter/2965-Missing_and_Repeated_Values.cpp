#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n*n;
        vector<int>freq(size+1,0);
        vector<int>ans(2,0);
        for(int i = 0 ;i<n;i++){
            for(int j = 0 ;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i = 0 ;i<=size;i++){
                if(freq[i]==2){
                    ans[0]=i;
                }
                if(freq[i]==0){
                    ans[1]=i;
                }
            }
            return ans;
    }
};