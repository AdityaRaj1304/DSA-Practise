#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid = low + (high - low)/2;
            if(possible(weights,days,mid)){
                high=mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
    bool possible(vector<int>&weights,int days , int maxpackage){
        int day = 1;
        int package = 0;
        for(int i =0;i<weights.size();i++){
            if(package + weights[i] <=maxpackage){
                package+=weights[i];
            }else{
                day++;
                package=weights[i];
            }
        }
        return day <= days;
    }
};