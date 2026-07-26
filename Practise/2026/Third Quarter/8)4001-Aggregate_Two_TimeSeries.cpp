#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        vector<vector<int>>ans;
        int m = series1.size() , n = series2.size();
        int i =0 ,j=0;
        while(i<m && j<n){
            int sum = 0;
            int time = 0;
            if(series1[i][0]==series2[j][0]){
                time = series1[i][0];
                sum=series1[i++][1]+series2[j++][1];
            }else if(series1[i][0]<series2[j][0]){
                time = series1[i][0];
                sum=series1[i++][1] + series2[j][1];
            }else{
                time = series2[j][0];
                sum=series2[j++][1]+series1[i][1];
            }
            ans.push_back({time,sum});
        }
        while(i<m){
            ans.push_back({series1[i][0],series1[i++][1]});
        }
        while(j<n){
            ans.push_back({series2[j][0],series2[j++][1]});
        }
        return ans;
    }
};