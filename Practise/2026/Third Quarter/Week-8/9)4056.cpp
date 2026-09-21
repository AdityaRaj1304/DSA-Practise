#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto&a,auto&b){
            if(a[1]==b[1]){
                return a[0]<b[0];
            }
            return a[1]<b[1];
        });
        int ans =0;
        for(int i =0;i<n-1;i++){
            for(int j =i+1;j<n;j++){
                if(intervals[j][0]<=intervals[i][1]){
                    ans++;
                }
            }
        }
        return ans;
    }
};


