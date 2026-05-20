#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans =0;
        int freq[101];
        for(int num:nums){
            freq[num]++;
        }
        for(int i = 0 ;i<101;i++){
            if(freq[i]==1){
                ans+=i;
            }
        }
        return ans;
    }
};