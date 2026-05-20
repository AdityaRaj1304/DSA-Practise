#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1;
        int high = 10000000;
        int ans =-1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(possible(dist,hour,mid)){
                ans =mid;
                high=mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    bool possible(vector<int>&dist,double hour , int maxtime){
        double time = 0;
        int n = dist.size();
        for(int i = 0 ;i<n-1;i++){
            if(dist[i]%maxtime == 0){
                time+=double(dist[i]/maxtime);
            }else{
                time+=double(dist[i]/maxtime+1);
            }
        }
        time+=double(dist[n-1])/maxtime;
        return time<=hour;
    }
};