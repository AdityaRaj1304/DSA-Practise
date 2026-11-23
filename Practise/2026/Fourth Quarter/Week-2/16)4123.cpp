#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n =  nums.size();
        ll ans = nums[0]+nums[n-1];
        vector<int>arr(nums.begin()+1,nums.begin()+n-1);
        sort(arr.begin(),arr.end());
        ll curr = ans;
        for(int i=1;i<arr.size();i+=2){
            curr+=arr[i]+arr[i-1];
            ans = min(ans,curr);
        }
        return ans;
    }
};