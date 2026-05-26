#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int zero = 0;
        for(int num:nums){
            if(num==0){
                zero++;
            }
        }
        for(int i = n-zero;i<n;i++){
            if(nums[i]!=0){
                ans++;
            }
        }
        return ans;
    }
};



class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>odd(k,0),even(k,0);
        for(int i = 0;i<k;i++){
            for(int j = 0;j<n;j++){
                int num = nums[j]%k;
                int inc = (i-num+k)%k;
                int dec = (num-i+k)%k;
                int cost = min(inc,dec);
                if(j%2!=0){
                    odd[i]+=cost;
                }else{
                    even[i]+=cost;
                }
            }

        }
        long long ans = LLONG_MAX;
        for(int i = 0;i<k;i++){
            for(int j = 0 ;j<k;j++){
                if(i==j){
                    continue;
                }
                ans = min(ans,odd[i]+even[j]);
            }
        }
        return ans;
    }
};



class Solution {
public:
    long long minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = LLONG_MAX;
        for (int x = 0; x < k; x++) {
            for (int y = 0; y < k; y++) {
                if (x == y)
                    continue;
                long long cost = 0;
                for (int i = 0; i < n; i++) {
                    int rem = nums[i] % k;
                    int temp;
                    if (i % 2 == 0)
                        temp = x;
                    else
                        temp = y;

                    int inc = (temp - rem + k) % k;
                    int dec = (rem - temp + k) % k;
                    cost += min(inc, dec);
                }
                ans = min(ans, cost);
            }
        }
        return ans;
    }
};