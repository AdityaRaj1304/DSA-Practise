#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans =0;
        vector<int>freq(51,0);
        for(int num:nums){
            freq[num]++;
            if(freq[num]==2){
                ans^=num;
            }
        }
        return ans;
    }
};