#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<string>&ans,string s, int n , int k , int cost , int idx ,int lp){
        if(cost>k){
            return ;
        }
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        if(lp!=1){
            s.push_back('0');
            helper(ans,s,n,k,cost,idx+1,0);
            s.pop_back();
            s.push_back('1');
            helper(ans,s,n,k,cost+idx,idx+1,1);
            s.pop_back();
        }else{
            s.push_back('0');
            helper(ans,s,n,k,cost,idx+1,0);
            s.pop_back();
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        vector<string>ans;
        string s="" ;
        helper(ans,s,n,k,0,0,0);
        return ans;
    }
};