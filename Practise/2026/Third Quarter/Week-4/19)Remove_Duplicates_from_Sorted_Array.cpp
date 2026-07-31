#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return n;
        }
        int idx =2;
        for(int i =2;i<n;i++){
            if(nums[i]!=nums[idx-2]){
                nums[idx]=nums[i];
                idx++;
            }
        }
        return idx;
    }
};

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<int>idx(101,0);
        for(int i=0;i<arr.size();i++){
            idx[arr[i]]=i;
        }
        for(int i=0;i<pieces.size();i++){
            for(int j =1;j<pieces[i].size();j++){
                if(idx[pieces[i][j]]!=idx[pieces[i][j-1]]+1){
                    return false;
                }
            }
        }
        return true;
    }
};