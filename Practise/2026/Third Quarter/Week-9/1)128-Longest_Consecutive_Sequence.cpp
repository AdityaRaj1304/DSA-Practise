#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int>s;
        for(int num:nums){
            s.insert(num);
        }
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int count = 1;
                int num = it;
                while(s.find(num+1)!=s.end()){
                    count++;
                    num++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};