#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int>freq(101,0);
        for(int num : nums){
            freq[num]++;
        }
        int ans = 0;
        for(int i = 1;i<101;i++){
            if(freq[i]>0){
                ans++;
            }
        }
        return ans;
    }
};