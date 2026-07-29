#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,int>count;
        int ans = 0;
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