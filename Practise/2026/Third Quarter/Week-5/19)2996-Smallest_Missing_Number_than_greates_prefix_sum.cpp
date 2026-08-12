#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        vector<int>freq(51,0);
        bool valid = true;
        freq[nums[0]]++;
        for(int i=1;i<nums.size();i++){
            freq[nums[i]]++;
            if(nums[i]==(nums[i-1]+1) && valid){
                sum+=nums[i];
            }else{
                valid=false;
            }
        }
        for(int i =sum;i<=50;i++){
            if(!freq[i]){
                return i;
            }
        }
        return sum;
    }
};


