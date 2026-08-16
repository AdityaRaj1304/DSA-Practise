#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxm = *max_element(lights.begin(),lights.end());
        int ans = 0;
        for(int time:arrivalTime){
            int r = time%period;
            if(r>=maxm){
                ans=max(ans,period-r);
            }
        }
        return ans;
    }
};