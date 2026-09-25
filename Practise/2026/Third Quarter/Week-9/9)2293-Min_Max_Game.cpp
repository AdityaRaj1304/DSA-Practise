#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();
        while(n>1){
            n/=2;
            for(int i=0;i<n;i++){
                if(i%2==0){
                    nums[i]=min(nums[2 * i], nums[2 * i + 1]);
                }else{
                    nums[i]=max(nums[2 * i], nums[2 * i + 1]);
                }
            }
        }
        return nums[0];
    }
};

class Solution {
public:
    int helper(vector<int>nums){
        int n = nums.size();
        if(n==1){
            return nums.front();
        }
        vector<int>temp(n/2);
        for(int i =0;i<n/2;i++){
            if(i%2==0){
                temp[i]=min(nums[2 * i], nums[2 * i + 1]);
            }else{
                temp[i]=max(nums[2 * i], nums[2 * i + 1]);
            }
        }
        return helper(temp);
    }
    int minMaxGame(vector<int>& nums) {
        return helper(nums);
    }
};