#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int time = logs[0][1];
        int ans = logs[0][0];
        for(int i =1;i<logs.size();i++){
            int curr = logs[i][1]-logs[i-1][1];
            if(curr>time){
                ans=logs[i][0];
                time =logs[i][1]-logs[i-1][1];
            }else if(curr==time){
                ans=min(ans,logs[i][0]);
            }
        }
        return ans;
    }
};