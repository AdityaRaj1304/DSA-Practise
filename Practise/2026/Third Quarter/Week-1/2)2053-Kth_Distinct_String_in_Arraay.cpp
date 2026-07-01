#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>dist;
        for(auto& s:arr){
            dist[s]++;
        }
        for(auto& s:arr){
            if(dist[s]==1){
                if(k==1){
                    return s;
                }else{
                    k--;
                }
            }
        }
        return "";
    }
};