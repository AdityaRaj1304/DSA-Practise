#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>ans(n,0);
        int left= 0 , right = n-1;
        for(int i = 0 , j=n-1;i<n;i++,j--){
            if(nums[i]<pivot){
                ans[left++]=nums[i];
            }
            if(nums[j]>pivot){
                ans[right--]=nums[j];
            }
        }
        for(int i = left;i<=right;i++){
            ans[i]=pivot;
        }
        return ans;
    }
};