#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>m;
        vector<vector<int>>ans;
        for(int i= 0;i<groupSizes.size();i++){
            int num = groupSizes[i];
            m[num].push_back(i);
            if(m[num].size()==num){
                ans.push_back(m[num]);
                m[num].clear();
            }
        }
        return ans;
    }
};