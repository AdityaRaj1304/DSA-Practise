#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>idx;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            idx[nums[i]].push_back(i);
        }
        for (auto&[val,v]: idx) {
            if(v.size()>=3){
                bool valid = true;
                int diff = v[1]-v[0];
                for(int i =2;i<v.size();i++){
                    if((v[i]-v[i-1])!=diff){
                        valid=false;
                        break;
                    }
                }
                if(valid){
                    ans++;
                }
            }
        }
        return ans;
    }
};