#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int,int>m;
        for(int i = 0 ;i<nums.size();i++){
            if(m.count(nums[i])){
                ans=min(ans,abs(i-m[nums[i]]));
            }
            m[reverse(nums[i])]=i;
        }
        return ans == INT_MAX ? -1:ans;
    }
    int reverse(int num){
        int temp = 0;
        while(num){
            temp = temp*10 + num%10;
            num/=10;
        }
        return temp;
    }
};