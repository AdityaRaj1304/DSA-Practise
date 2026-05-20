#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,int>freq;
        for(int i :nums){
            mp[i]++;
        }
        for(auto&it:mp){
            freq[it.second]++;
        }
        for(int i:nums){
            if(freq[mp[i]]==1){
                return i;
            }
        }
        return -1;
    }
};