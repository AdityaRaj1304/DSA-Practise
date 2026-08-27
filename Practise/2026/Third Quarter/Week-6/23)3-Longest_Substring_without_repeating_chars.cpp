#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int ans = 0;
        vector<int>freq(128,0);
        for(int r =0;r<n;r++){
            freq[s[r]]++;
            while(freq[s[r]]>1){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int ans = 0;
        vector<int>last(128,-1);
        for(int r =0;r<n;r++){
            if(last[s[r]]>l){
                l = last[s[r]]+1;
            }
            last[s[r]]=r;
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};