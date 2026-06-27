#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string num ="";
        for(char ch:s){
            num+=to_string(ch-'a'+1);
        }
        int ans = 0;
        for(int i =0;i<k;i++){
            ans = 0;
            for(char ch:num){
                ans+=(ch-'0');
            }
            num=to_string(ans);
        }
        return ans;
    }
};


class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int count = 0,len=0;
            for(int j = i;j<n;j++,len++){
                if(nums[j]==target){
                    count++;
                }
                if(2*count>len){
                    ans++;
                }
            }
        }
        return ans;
    }
};