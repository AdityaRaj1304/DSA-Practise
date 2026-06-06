#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<unordered_map<int,int>>freq(n);
        vector<bool>visited(n,false);
        int ans =0;
        for(auto &it: pick){
            int player = it[0];
            int ball = it[1];
            if(visited[player]){
                continue;
            }
            freq[player][ball]++;
            if(freq[player][ball]>player){
                ans++;
                visited[player]=true;
            }
        }
        return ans;
    }
};