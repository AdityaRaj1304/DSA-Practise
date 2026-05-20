#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s;
        char ch ='-1';
        helper(n,ans,s,ch);
        return ans;
    }
    void helper(int n , vector<string>&ans , string s ,char lp){
        if(s.size()==n){
            ans.push_back(s);
        }
        helper(n,ans,s+='1','1');
        s.pop_back();
        if(lp != '0'){
            helper(n,ans,s+='0','0');
            s.pop_back();
        }
    }
};