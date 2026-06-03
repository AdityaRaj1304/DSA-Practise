#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>&startFirst , vector<int>&firstDuration , vector<int>&secondStart, vector<int>&secondduration){
        int minStart = INT_MAX;
        int ans = INT_MAX;
        for(int i = 0 ;i<startFirst.size();i++){
            minStart=min(minStart,startFirst[i]+firstDuration[i]);
        }
        for(int i = 0 ;i<secondStart.size();i++){
            int start = max(minStart,secondStart[i]);
            ans=min(ans,start+secondduration[i]);
        }
        return ans;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int lFirst = helper(landStartTime,landDuration,waterStartTime,waterDuration);
        int wFirst = helper(waterStartTime,waterDuration,landStartTime,landDuration);
        return min(lFirst,wFirst);
    }
};