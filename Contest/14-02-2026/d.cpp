#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxXor(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0 ;i<n;i++){
            int maximum = nums[i] , minimum = nums[i];
            int temp=0;
            for(int j =i;j<n;j++){
                maximum=max(maximum,nums[j]);
                minimum=min(minimum,nums[j]);
                temp^=nums[j];
                if(maximum-minimum>k){
                    break;
                }
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};