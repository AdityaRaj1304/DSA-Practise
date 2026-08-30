#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return 1;
        }
        vector<int>found(101,0);
        int ans = 0;
        found[nums[0]]=1;
        for(int i=1;i<nums.size();i++){
            if (found[nums[i]] == 1) {
                found[nums[i]] = -1; 
            } else if (found[nums[i]] == 0) {
                found[nums[i]] = 1;  
            }
        }
        for(int i =0;i<found.size();i++){
            if(found[i]==1){
                ans++;
            }
        }
        return ans;
    }
};