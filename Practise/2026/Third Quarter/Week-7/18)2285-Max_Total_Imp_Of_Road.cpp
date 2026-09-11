#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        ll sum = 0 , ans  =0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>0){
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};



class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int n = arr.size();
        for(auto& v:pieces){
            int j = 0;
            while(arr[j]!=v[0]){
                j++;
            }
            for(int i =0;i<pieces.size();i++){
                if(j+i>=n||arr[j+i]!=v[i]){
                    return false;
                }
            }
        }
        return true;
    }
};