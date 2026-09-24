#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int i = 0,j=1;
        for(int num:nums){
            if(num%2==0){
                ans[i]=num;
                i+=2;
            }else{
                ans[j]=num;
                j+=2;
            }
        }
        return ans;
    }
};