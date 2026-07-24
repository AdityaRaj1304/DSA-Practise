#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        int maxm = 0;
        int ans =0;
        for(int num:nums){
            maxm |=num;
        }
        vector<bool>pair(maxm,false);
        vector<bool>triplet(maxm,false);
        for(int i =0;i<n;i++){
            for(int j =i;j<n;j++){
                pair[nums[i]^nums[j]]=true;
            }
        }
        for(int i =0;i<=maxm;i++){
            if(!pair[i]){
                continue;
            }
            for(int num:nums){
                triplet[i^num]=true;
            }
        }
        for(int i=0;i<=maxm;i++){
            if(triplet[i]){
                ans++;
            }
        }
        return ans;
    }
};

