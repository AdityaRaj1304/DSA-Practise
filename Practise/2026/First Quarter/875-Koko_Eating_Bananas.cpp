#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = *min_element(piles.begin(),piles.end());
        int high = *max_element(piles.begin(),piles.end());
        while(low<high){
            int mid = low +(high-low)/2;
            if(possible(piles,h,mid)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    bool possible(vector<int>&piles,int h , int maxb){
        int hours = 0;
        for(int i = 0 ;i<piles.size();i++){
            if(piles[i]%maxb == 0){
                hours+=piles[i]/maxb;
            }else{
                hours+=piles[i]/maxb+1;
            }
        }
        return hours<=h;
    }
};