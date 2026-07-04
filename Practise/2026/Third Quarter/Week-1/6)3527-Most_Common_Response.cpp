#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        string ans = "";
        unordered_map<string,int>m;
        int count = 0;
        for(auto& response: responses){
            unordered_set<string>s;
            for(auto& r:response){
                if(s.find(r)==s.end()){
                    m[r]++;
                    s.insert(r);
                    if(m[r]>count){
                        ans=r;
                        count=m[r];
                    }else if(m[r]==count && r<ans){
                        ans=r;
                    }
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n =  nums.size();
        vector<int>ans;
        for(int num:nums){
            if(nums[abs(num)]>0){
                nums[abs(num)]*=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};