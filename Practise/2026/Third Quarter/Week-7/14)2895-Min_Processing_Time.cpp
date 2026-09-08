#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        int ans = 0;
        sort(processorTime.begin(),processorTime.end());
        sort(tasks.begin(),tasks.end(),greater<int>());
        int j = 0;
        for(int i=0;i<processorTime.size();i++){
            ans=max(ans,tasks[j]+processorTime[i]);
            j+=4;
        }
        return ans;
    }
};