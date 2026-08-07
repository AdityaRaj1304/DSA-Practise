#include <bits/stdc++.h>
using namespace std;
using ll = long long;



class Solution { // Sinlge pass solution
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<vector<int>>ans;
        for(int num:nums){
            freq[num]++;
            if (ans.size() < freq[num]){
                ans.push_back({});
            }
            ans[freq[num]-1].push_back(num);
        }
        return ans;
    }
};

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>freq;
        int rows =0;
        for(int num:nums){
            freq[num]++;
            if(freq[num]>rows){
                rows=freq[num];
            }
        }
        vector<vector<int>>ans(rows);
        for(auto&it:freq){
            int idx =0;
            while(it.second--){
                ans[idx++].push_back(it.first);
            }
        }
        return ans;
    }
};

