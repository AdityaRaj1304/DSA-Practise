#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();
        priority_queue<pair<double,pair<double,double>>>pq;
        for(auto&c:classes){
            double pass = c[0];
            double total = c[1];
            double ratio_gain = ((pass+1.0)/(total+1.0))-(pass/total);
            pq.push({ratio_gain,{pass,total}});
        }
        for(double i =0;i<extraStudents;i++){
            auto curr=pq.top();
            pq.pop();
            double pass = curr.second.first+1.0;
            double total = curr.second.second+1.0;
            double ratio_gain = ((pass+1.0)/(total+1.0))-(pass/total);
            pq.push({ratio_gain,{pass,total}});
        }
        double ans =0.0;
        while(pq.size()>0){
            auto curr=pq.top();
            pq.pop();
            double pass = curr.second.first;
            double total = curr.second.second;
            ans+=pass/total;
        }
        return ans/n;
    }
};



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return n;
        }
        int idx =2;
        for(int i =2;i<n;i++){
            if(nums[i]!=nums[idx-2]){
                nums[idx]=nums[i];
                idx++;
            }
        }
        return idx;
    }
};