#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans =0;
        int left  = 0;
        unordered_map<int,int>freq;
        for(int right=0;right<n;right++){
            freq[right]++;
            while(freq[right]>k){
                freq[left]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};


class Solution {
public:
    int longestSubstring(string s, int k) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        int ans =0;
        int l = 0;
        vector<int>count(26,0);
        for(int r =0;r<s.size();r++){
            if(freq[s[r]-'a']<k){
                l=r;
            }else{
                count[s[r]-'a']++;
                if(count[s[r]-'a']>=k){
                    bool valid = true;
                    for(int i=0;i<26;i++){
                        if(freq[i]&&freq[i]<k){
                            valid=false;
                            break;
                        }
                    }
                    if(valid){
                        ans=max(ans,r-l+1);
                    }
                }
            }
        }
        return ans;
    }
};