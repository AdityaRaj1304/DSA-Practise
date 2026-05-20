#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        unordered_map<int,int>freq1 , freq2;
        for(int num :nums1){
            freq1[num]++;
        }
        for(int num :nums2){
            freq2[num]++;
        }
        unordered_map<int,int>temp;
        for(auto &x : freq1){
            temp[x.first]+=x.second;
        }
        for(auto &x : freq2){
            temp[x.first]+=x.second;
        }
        for(auto &x :temp){
            if((x.second % 2)!=0){
                return -1;
            }
        }
        for(auto &x : temp){
            ans+=abs(freq1[x.first]-freq2[x.first]);
        }
        return ans/4;
    }
};