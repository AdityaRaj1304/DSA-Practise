#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int,vector<int>>m;
        for(int i = 0 ;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        for(auto it:m){
            vector<int>&temp = it.second;
            if(temp.size()>=3){
                for(int i = 0;i<temp.size()-2;i++){
                    ans=min(ans,2*(temp[i+2]-temp[i]));
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};