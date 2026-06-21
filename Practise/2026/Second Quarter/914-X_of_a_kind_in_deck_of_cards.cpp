#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>freq;
        for(int num:deck){
            freq[num]++;
        }
        int ans = 0;
        for(auto&it:freq){
            ans = gcd(ans,it.second);
        }
        return ans>1;
    }
};



