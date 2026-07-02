#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n =  nums.size();
        vector<int>ans;
        for(int num:nums){
            if(nums[abs(num)-1]>0){
                nums[abs(num)-1]*=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};


