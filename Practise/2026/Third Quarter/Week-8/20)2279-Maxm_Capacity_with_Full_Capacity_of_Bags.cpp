#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        int ans = 0;
        vector<int>diff;
        for(int i =0;i<n;i++){
            int left = capacity[i]-rocks[i];
            if(left>0){
                diff.push_back(left);
            }else if(left==0){
                ans++;
            }
        }
        sort(diff.begin(),diff.end());
        for(int i =0;i<diff.size();i++){
            if(diff[i]<=additionalRocks){
                additionalRocks-=diff[i];
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};