#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans =0;
        long long init_items = 0;
        long long left_items=0;
        if(need1>=need2){
            init_items=need2;
            left_items=need1-need2;
            ans=min(cost1+cost2,costBoth)*init_items + min(cost1,costBoth)*left_items;
        }else{
            init_items=need1;
            left_items=need2-need1;
            ans=min(cost1+cost2,costBoth)*init_items + min(cost2,costBoth)*left_items;
        }
        return ans;
    }
};


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        unordered_set<int>s;
        for(auto&it:freq){
            if(s.find(it.second)!=s.end()){
                return false;
            }else{
                s.insert(it.second);
            }
        }
        return true;
    }
};
