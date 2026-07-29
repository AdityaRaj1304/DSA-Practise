#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<ll,ll>count;
        ll ans = 0;
        for(int hour:hours){
            int remaining = hour%24;
            if(remaining==0){
                ans+=count[remaining];
            }else{
                ans+=count[24-remaining];
            }
            count[remaining]++;
        }
        return ans;
    }
};