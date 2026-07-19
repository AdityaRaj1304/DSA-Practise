#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();
        string ans = "";
        vector<int>last(26,-1);
        for(int i =0;i<n;i++){
            last[s[i]-'a']=i;
        }
        vector<bool>seen(26,false);
        for(int i =0;i<n;i++){
            char ch = s[i];
            if(seen[ch-'a']){
                continue;
            }
            while(!ans.empty() && ans.back()>ch && last[ans.back()-'a']>i){
                seen[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(ch);
            seen[ch-'a']=true;
        }
        return ans;
    }
};