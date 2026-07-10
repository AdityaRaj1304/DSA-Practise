#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>freq[201,0];
        for(int num:nums){
            freq[num+100]++;
        }
        sort(nums.begin(),nums.end(),[](auto &a , auto &b){
            if(freq[a+100]==freq[b+100]){
                return a>b;
            }
            return freq[a+100]<freq[b+100];
        });
        return nums;
    }
};