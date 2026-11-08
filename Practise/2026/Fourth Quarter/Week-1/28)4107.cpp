#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int>temp1=nums;
        vector<int>temp2=target;
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        if(temp1!=temp2){
            return 0;
        }
        int l =0 , r=n-1;
        while(l<n&&nums[l]==target[l]){
            l++;
        }
        while(r>0&&target[r-1]>=target[r]){
            r--;
        }
        int maxL = min(l,n-1);
        if(r<=maxL){
            return maxL-r+1;
        }
        return 0;
    }
};


class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<int>freq(26,0);
        for(char ch:nums){
            freq[ch-'a']++;
        }
        for(char ch:target){
            freq[ch-'a']--;
            if(freq[ch-'a']<0){
                return 0;
            }
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return 0;
            }
        }
        int l =0 , r=n-1;
        while(l<n&&nums[l]==target[l]){
            l++;
        }
        while(r>0&&target[r-1]>=target[r]){
            r--;
        }
        int maxL = min(l,n-1);
        if(r<=maxL){
            return maxL-r+1;
        }
        return 0;
    }
};