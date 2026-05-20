#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        ans[0]=first(nums,target,0,nums.size()-1);
        ans[1]=last(nums,target,0,nums.size()-1);
        return ans;
    }
    int first(vector<int>&nums,int target , int st , int end){
        int ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                ans=mid;
                end=mid-1;
            }else if(nums[mid] >target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
    int last(vector<int>&nums,int target , int st , int end){
        int ans = -1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] == target){
                ans=mid;
                st=mid+1;
            }else if(nums[mid] >target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};