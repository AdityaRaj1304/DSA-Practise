#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int ans = -1;
        int n = nums.size();
        if(n == 2){
            if(nums[0] == 1){
                return 1;
            }
        }
        vector<int>sum(n,0);
        sum[0]=nums[0];
        for(int i = 1 ; i<n;i++){
            sum[i]=sum[i-1]+nums[i];
        }
        int product = nums[n-1];
        for(int i = n-2;i>0;i--){
            if(product == sum[i-1]){
                ans=i;
            }
            if(product>sum[i-1]){
                break;
            }
            product*=nums[i];
        }
        return ans;
    }
};