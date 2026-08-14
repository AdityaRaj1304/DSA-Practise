#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int num:arr){
            int bits = __builtin_popcount(num);
            pq.push({bits,num});
        }
        vector<int>ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

