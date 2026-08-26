#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 2;
        long long prod =1;
        int l = 0;
        if(n==2){
            return ans;
        }
        for(int r=0;r<n;r++){
            while(gcd(prod,nums[r])!=1){
                prod/=nums[l];
                l++;
            }
            prod*=nums[r];
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};


