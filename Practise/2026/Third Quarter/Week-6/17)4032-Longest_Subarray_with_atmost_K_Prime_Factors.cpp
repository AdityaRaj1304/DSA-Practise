#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// class Solution {
// public:
//     void prime_add(int n,unordered_map<int,int>&freq){
//         for(int i = 2; i * i <= n; i++) {
//             while(n % i == 0) {
//                 freq[i]++;
//                 n /= i;
//             }
//         }
//     }
//     void prime_remove(int n,unordered_map<int,int>&freq){
//         for(int i = 2; i * i <= n; i++) {
//             while(n % i == 0) {
//                 freq[i]--;
//                 if(freq[i]==0){
//                     freq.erase(i);
//                 }
//                 n /= i;
//             }
//         }
//     }
//     int longestSubarray(vector<int>& nums, int k) {
//         int l=0;
//         unordered_map<int,int>freq;
//         int ans =0;
//         for(int r =0;r<nums.size();r++){
//             prime_add(nums[r],freq);
//             if(freq.size()>k){
//                 prime_remove(nums[l],freq);
//                 l++;
//             }
//             ans=max(ans,r-l+1);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    void prime_add(int n, unordered_map<int,int>& freq) {
        for(int i = 2; i * i <= n; i++) {
            while(n % i == 0) {
                freq[i]++;
                n /= i;
            }
        }
        if (n > 1) {
            freq[n]++;
        }
    }
    void prime_remove(int n, unordered_map<int,int>& freq) {
        for(int i = 2; i * i <= n; i++) {
            while(n % i == 0) {
                freq[i]--;
                if(freq[i] == 0) {
                    freq.erase(i);
                }
                n /= i;
            }
        }
        if (n > 1) {
            freq[n]--;
            if(freq[n] == 0){
                freq.erase(n);
            }
        }
    }
    
    int longestSubarray(vector<int>& nums, int k) {
        int l = 0;
        unordered_map<int,int> freq;
        int ans = 0;
        for(int r = 0; r < nums.size(); r++) {
            prime_add(nums[r], freq);
            while(freq.size() > k) {
                prime_remove(nums[l], freq);
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};


class Solution {
public:
    vector<bool> validSubarrays(vector<int>& nums, int k, vector<vector<int>>& queries) {
        vector<bool>ans;
        for(auto &query:queries){
            unordered_map<int,int>freq;
            for(int i=query[0];i<=query[1];i++){
                freq[nums[i]]++;
            }
            if(freq.size()!=k){
                ans.push_back(false);
            }else{
                bool valid = true;
                for(auto it:freq){
                    if(it.second%2){
                        valid=false;
                        ans.push_back(valid);
                        break;
                    }
                }
                if(valid)
                ans.push_back(true);
            }
        }
        return ans;
    }
};










