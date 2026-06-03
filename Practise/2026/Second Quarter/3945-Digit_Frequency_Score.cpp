#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>freq;
        int ans = 0;
        while(n){
            int digit = n%10;
            freq[digit]++;
            n/=10;
        }
        for(auto it:freq){
            ans+=it.first*it.second;
        }
        return ans;
    }
};