#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>inDeg(n);
        for(auto&edge:edges){
            inDeg[edge[1]]++;
        }
        int ans =0;
        int count =0;
        for(int i=0;i<n;i++){
            if(inDeg[i]==0){
                ans=i;
                count++;
            }
            if(count>1){
                return -1;
            }
        }
        return ans;
    }
};


