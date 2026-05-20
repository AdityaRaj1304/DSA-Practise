#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> makeParityAlternating(vector<int>& nums) {
        int n = nums.size();
        int count = 0 ;
        if(nums.size()==1){
            return{0,0};
        }
        for(int i = 0 ;i<n;i++){
            if(nums[i]%2!=0 && i%2==0){
                count++;
                nums[i]--;
            }
            if(nums[i]%2==0 && i%2!=0){
                count++;
                nums[i]--;
            }
        }
        sort(nums.begin(),nums.end());
        int ans = nums[n-1]-nums[0];
        return {count,ans};
    }
};©leetcode