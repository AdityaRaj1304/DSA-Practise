#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        if(n==1){
            return true;
        }
        int odd = 0 , even  =0;
        for(int num:nums1){
        if(num%2==0){
            even++;
        }else{
            odd++;
        }
        }
        if(odd==n || even == n ){
            return true;
        }
        int minimum =*min_element(nums1.begin(),nums1.end());
        if(minimum % 2==0){
            if(odd > 0){
                return false;
            }
        }
        return true;
    }
};