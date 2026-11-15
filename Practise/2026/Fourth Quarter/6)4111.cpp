#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i=0;i<n;i++){
            int score = -1 , minm = INT_MAX;
            for(int j =i;j<n;j++){
                minm = min(nums[j],minm);
                score&=nums[j];
                if(score==minm){
                    ans++;
                }
            }
        }
        return ans;
    }
};