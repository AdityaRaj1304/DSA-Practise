#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        string ans = "";
        unordered_map<string,string>mp;
        for(auto &k:knowledge){
            mp[k[0]]=k[1];
        }
        int i =0;
        while(i<n){
            if(s[i]=='('){
                int j = i+1;
                while(s[j]!=')'){
                    j++;
                }
                string word = s.substr(i+1,j-i-1);
                if(mp.find(word)!=mp.end()){
                    ans+=mp[word];
                }else{
                    ans+='?';
                }
                i=j+1;
            }else{
                ans+=s[i];
                i++;
            }
        }
        return ans;
    }
};