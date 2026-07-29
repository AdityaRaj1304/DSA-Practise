#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>count;
        int ans =0;
        for(int t:time){
            int song = t%60;
            int required = (60-song)%60;
            ans+=count[required];
            count[song]++;
        }
        return ans;
    }
};

