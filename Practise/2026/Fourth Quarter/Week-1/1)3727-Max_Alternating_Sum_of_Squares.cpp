#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        ll ans =0;
        vector<int>arr;
        for(int num:nums){
            arr.push_back(abs(num));
        }
        sort(arr.begin(),arr.end());
        for(int i =0;i<n;i++){
            if(i<n/2){
                ans-=(arr[i]*arr[i]);
            }else{
                ans+=(arr[i]*arr[i]);
            }
        }
        return ans;
    }
};