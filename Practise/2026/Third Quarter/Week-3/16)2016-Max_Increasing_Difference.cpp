#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0;
        int minm = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]>minm){
                ans=max(ans,nums[i]-minm);
            }else{
                minm=nums[i];
            }
        }
        return ans;
    }
};

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans =0;
        int m = nums1.size() , n = nums2.size();
        int i =0,j=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                i++;
            }
            j++;
        }
        return max(ans,j-i-1);
    }
};

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxm = -1;
        for(int i =n-1;i>=0;i--){
            int curr = arr[i];
            arr[i]=maxm;
            maxm=max(maxm,curr);
        }
        return arr;
    }
};