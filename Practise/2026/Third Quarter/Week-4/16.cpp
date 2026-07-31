#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    double maxAverageRatio(vector<vector<double>>& classes, double extraStudents) {
        priority_queue<pair<double,pair<double,double>>,vector<pair<double,pair<double,double>>>,greater<pair<double,pair<double,double>>>>pq;
        for(auto&c:classes){
            double pass = c[0];
            double total = c[1];
            double ratio = pass/total;
            pq.push({ratio,{pass,total}});
        }
        for(double i =0;i<extraStudents;i++){
            auto&curr=pq.top();
            pq.pop();
            double pass = curr.second.first;
            double total = curr.second.second;
            double ratio = (pass+1)/(total+1);
            pq.push({ratio,{pass+1,total+1}});
        }
        double ans =0.0;
        while(pq.size()>0){
            auto&curr=pq.top();
            pq.pop();
            ans+=curr.first;
        }
        return ans;
    }
};