#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,vector<int>>mp;
        for(int i =0;i<words.size();i++){
            string s= words[i];
            vector<int>arr;
            for(int i=1;i<s.size();i++){
                arr.push_back((s[i]-'a')-(s[i-1]-'a'));
            }
            mp[arr].push_back(i);
        }
        for(auto it:mp){
            if(it.second.size()==1){
                return words[it.second[0]];
            }
        }
        return "";
    }
};