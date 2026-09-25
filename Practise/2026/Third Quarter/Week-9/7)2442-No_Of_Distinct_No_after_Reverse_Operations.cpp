#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int reverse(int num){
        int ans = 0;
        while(num){
            ans=ans*10+num%10;
            num/=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>ans;
        for(int num:nums){
            int x = reverse(num);
            ans.insert(num);
            ans.insert(x);
        }
        return ans.size();
    }
};


