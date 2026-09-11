#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1;
        int num = nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]==num){
                cnt++;
            }else{
                cnt--;;
                if(cnt==0){
                    num=nums[i];
                    cnt=1;
                }
            }
        }
        int freq = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==num){
                freq++;
            }
        }
        int curr = 0;
        for(int i =0;i<n;i++){
            if(nums[i]==num){
                curr++;
            }
            if(curr>(i+1)/2 && freq-curr>((n-i-1)/2)){
                return i;
            }
        }
        return -1;
    }
};