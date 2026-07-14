#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(string num,vector<int>&ans,int low , int high){
        while(num.back()<='9'){
            int n = stoi(num);
            if(n>=low && n<=high){
                ans.push_back(n);
            }
            if(num.back()=='9'){
                return;
            }
            for(char &ch:num){
                ch++;
            }
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int st = to_string(low).size();
        int end = to_string(high).size();
        for(int len =st;len<=end;len++){
            string num = "";
            for(int j=1;j<=len;j++){
                num+=char('0'+j);
            }
            helper(num,ans,low,high);
        }
        return ans;
    }
};

