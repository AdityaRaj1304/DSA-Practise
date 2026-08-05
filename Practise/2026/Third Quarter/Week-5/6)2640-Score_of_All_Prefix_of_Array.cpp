#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<ll>ans;
        ans.push_back(nums[0]*2);
        ll maxm = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]>maxm){
                maxm=nums[i];
            }
            ll conver = nums[i]+maxm;
            ans.push_back(conver+ans.back());
        }
        return ans;
    }
};

