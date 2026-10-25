#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    ll helper(int num){
        vector<int>freq(10,0);
        while(num){
            freq[num%10]++;
            num/=10;
        }
        ll ans =0;
        for(int i=9;i>=0;i--){
            while(freq[i]--){
                ans=ans*10+i;
            }
        }
        return ans;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        ll ans = accumulate(nums.begin(),nums.end(),0LL);
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            int maxm = helper(nums[i]);
            pq.push(maxm-nums[i]);
        }
        for(int i=0;i<k;i++){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};