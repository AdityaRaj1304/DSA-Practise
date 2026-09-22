#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using ll = long long ;
class Solution {
public:
    int helper(vector<int>&startTime,int st, int end , int x){
        while(st<end){
            int mid = st+(end-st)/2;
            if(startTime[mid]<=x){
                st=mid+1;
            }else{
                end=mid;
            }
        }
        return st;
    }
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        ll ans = 0;
        sort(intervals.begin(),intervals.end());
        vector<int>startTime;
        for(auto interval:intervals){
            startTime.push_back(interval[0]);
        }
        for(int i =0;i<n-1;i++){
            int endTime = intervals[i][1];
            int invalid = helper(startTime,i+1,n,endTime);
            ans+=invalid-i-1;
        }
        return ans;
    }
};