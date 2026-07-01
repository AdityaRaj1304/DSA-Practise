#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>>m;
        vector<int>ans(k,0);
        for(auto& v:logs){
            int id = v[0];
            int time = v[1];
            m[id].insert(time);
        }
        for(auto& it:m){
            ans[it.second.size()-1]++;
        }
        return ans;
    }
};