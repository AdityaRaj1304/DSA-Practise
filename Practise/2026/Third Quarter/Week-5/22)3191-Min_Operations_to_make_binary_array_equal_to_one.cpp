#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n =nums.size();
        int ans =0;
        for(int i=0;i<n-2;i++){
            if(nums[i]==0){
                for(int j=0;j<3;j++){
                    nums[i+j]^=1;
                }
                ans++;
            }
        }
        if(!nums[n-2]||!nums[n-1]){
            return -1;
        }
        return ans;
    }
};