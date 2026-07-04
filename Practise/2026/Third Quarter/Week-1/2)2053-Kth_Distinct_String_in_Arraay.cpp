#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>dist;
        for(auto& s:arr){
            dist[s]++;
        }
        for(auto& s:arr){
            if(dist[s]==1){
                if(k==1){
                    return s;
                }else{
                    k--;
                }
            }
        }
        return "";
    }
};


class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,unordered_set<int>>m;
        vector<int>ans(k,0);
        for(auto& v:logs){
            int id = v[0];
            int time = v[1];
            m[id].insert(time);
        }
        for(auto& it:m){
            ans[it.second.size()]++;
        }
        return ans;
    }
};