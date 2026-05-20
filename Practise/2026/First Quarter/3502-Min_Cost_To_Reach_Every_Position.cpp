#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int minimum = INT_MAX;
        vector<int>ans;
        for(int num :cost){
            minimum=min(num,minimum);
            ans.push_back(minimum);
        }
        return ans;
    }
};