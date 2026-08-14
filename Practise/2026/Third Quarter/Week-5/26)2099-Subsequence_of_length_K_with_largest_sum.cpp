#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<pair<int,int>>largest;
        while(pq.size()>0){
            auto it =pq.top();
            pq.pop();
            largest.push_back({it.second,it.first});
        }
        sort(largest.begin(),largest.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(largest[i].second);
        }
        return ans;
    }
};

