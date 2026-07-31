#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int curr = 0;
        int minm = INT_MAX;
        for(int num:nums){
            curr+=num;
            minm=min(minm,curr);
        }
        return minm>0 ? 1:abs(minm)+1;      
    }
};


