#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int num :nums){
            m[num]++;
        }
        vector<pair<int,int>>num;
        for(auto i:m){
            num.push_back(make_pair(i.second,i.first));
        }
        sort(num.begin(),num.end(),greater<pair<int,int>>());
        vector<int>ans;
        for(int i = 0 ;i<k;i++){
            ans.push_back(num[i].second);
        }
        return ans;
    }
};