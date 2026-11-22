#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 1;
        }
        int ans = 0;
        if(nums[0]>=nums[1]){
            ans++;
        }
        if(nums.back()>=nums[n-2]){
            ans++;
        }
        for(int i =1;i<n-1;i++){
            if((double)nums[i]>=(double(nums[i-1]+nums[i+1]))/2){
                ans++;
            }
        }
        return ans;
    }
};



