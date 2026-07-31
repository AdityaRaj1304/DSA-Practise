#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>loss;
        for(auto&match:matches){
            int winner = match[0];
            int loser = match[1];
            if(loss.count(winner)==0){
                loss[winner]=0;
            }
            loss[loser]++;
        }
        vector<vector<int>>ans(2);
        for(auto&it:loss){
            if(it.second==0){
                ans[0].push_back(it.first);
            }else if(it.second==1){
                ans[1].push_back(it.first);
            }
        }
        return ans;
    }
};


class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<pair<double,pair<int,int>>>>pq;
        for(auto&c:classes){
            int pass = c[0];
            int total = c[1];
            double ratio = pass/total;
            pq.push({ratio,{pass,total}});
        }
        for(int i =0;i<extraStudents;i++){
            auto&curr=pq.top();
            pq.pop();
            int pass = curr.second.first;
            int total = curr.second.second;
            double ratio = (pass+1)/(total+1);
            pq.push({ratio,{pass+1,total+1}});
        }
        while(pq.size()>0){
            
        }
    }
};