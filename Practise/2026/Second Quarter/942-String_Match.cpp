#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int n = s.size();
        int inc = 0 , dec = n;
        for(char ch:s){
            if(ch=='I'){
                ans.push_back(inc++);
            }else{
                ans.push_back(dec--);
            }
        }
        if(s[n-1]=='I'){
            ans.push_back(inc);
        }else{
            ans.push_back(dec);
        }
        return ans;
    }
};