#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int ans = 0;
        vector<int>row(m,0) , col(n,0);
        for(vector v:indices){
            row[v[0]]++;
            col[v[1]]++;
        }
        for(int i = 0;i<m;i++){
            for(int j=0;j<n;j++){
                if((row[i]+col[j])%2==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};