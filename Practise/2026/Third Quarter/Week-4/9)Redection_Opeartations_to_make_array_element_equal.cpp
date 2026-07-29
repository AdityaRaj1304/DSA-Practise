#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans = 0;
        int prev = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]==prev){
                continue;
            }else{
                ans+=i;
            }
            prev=nums[i];
        }
        return ans;
    }
};

