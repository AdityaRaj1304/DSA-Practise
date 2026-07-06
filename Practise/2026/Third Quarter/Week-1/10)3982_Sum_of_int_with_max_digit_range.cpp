#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int ans = 0;
        int max_range = 0;
        for(int num:nums){
            int maximum = 0;
            int minimum = 10;
            int temp = num;
            while(temp){
                int digit = temp%10;
                maximum = max(maximum,digit);
                minimum = min(minimum,digit);
                temp/=10;
            }
            int range = maximum - minimum;
            if(range>max_range){
                max_range=range;
                ans=num;
            }else if(range==max_range){
                ans+=num;
            }
        }
        return ans;
    }
};©leetcode