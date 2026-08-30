#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int helper(int idx, int sum , vector<vector<pair<int,int>>>&arr,vector<vector<int>>&value){
        if(sum==0){
            return 0;
        }
        if(idx==arr.size()){
            return 1e9;
        }
        if(value[idx][sum]!=-1){
            return value[idx][sum];
        }
        int ans = helper(idx+1,sum,arr,value);
        for(auto&x:arr[idx]){
            int num  = x.first;
            int cost = x.second;
            if(sum>=num){
                ans=min(ans,cost+helper(idx+1,sum-num,arr,value));
            }
        }
        return value[idx][sum]=ans;
    }
    int minOperations(vector<int>& nums, int sum) {
        int n = nums.size();
        vector<vector<pair<int,int>>>arr(n);
        vector<vector<int>> value(n, vector<int>(sum + 1, -1));
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(num<=sum){
                arr[i].push_back({num,0});
            }
            int x = n;
            int operation  = 0;
            while(x){
                x/=2;
                operation++;
                if(x && x<=sum){
                    arr[i].push_back({x,operation});
                }
            }
            x = n;
            operation  = 0;
            while(x*2<=sum){
                x*=2;
                operation++;
                arr[i].push_back({x,operation});
            }
        }
        int ans = helper(0,sum,arr,value);
        return ans>=1e9 ? -1:ans;
    }
};