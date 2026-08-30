#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int helper(vector<int>&arr){
        int n = arr.size();
        if(n<=1){
            return 0;
        }
        int score = 0;
        vector<int>pref(n);
        vector<int>suff(n);
        pref[0]=arr[0];
        suff[n-1]=arr[n-1];
        for(int i =1;i<n;i++){
            pref[i]=gcd(pref[i-1],arr[i]);
        }
        for(int i =n-2;i>=0;i--){
            suff[i]=gcd(suff[i+1],arr[i]);
        }
        for(int i =0;i<n-1;i++){
            if(pref[i]==suff[i+1]){
                score++;
            }
        }
        return score;
    }
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        int ans = helper(nums);
        for(int i =0;i<n;i++){
            vector<int>arr=nums;
            arr.erase(arr.begin()+i);
            int score = helper(arr);
            ans=max(ans,score);
        }
        return ans;
    }
};