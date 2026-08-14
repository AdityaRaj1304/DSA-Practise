#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        while(k--){
            auto num = pq.top();
            pq.pop();
            pq.push(-1 * num);
        }
        int ans =0;
        while(pq.size()>0){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int idx =0;
        for(int i =0;i<nums.size();i++){
            if(nums[idx]<=0&&k){
                nums[idx++]=abs(nums[idx]);
                k--;
            }else{
                break;
            }
        }
        int ans = accumulate(nums.begin(),nums.end(),0);;
        if(k&&k%2){
            int minm= *min_element(nums.begin(),nums.end());
            ans-=2*minm;
        }
        return ans;
    }
};