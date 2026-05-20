#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int freq[101];
        for(int num:nums){
            if(num%2==0){
            freq[num]++;
            }
        }
        for(int i = 0 ;i<nums.size();i++){
            if(freq[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};