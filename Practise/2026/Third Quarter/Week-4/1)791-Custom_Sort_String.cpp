#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<int,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        string ans = "";
        for(char ch:order){
            if(freq.find(ch)!=freq.end()){
                ans.append(freq[ch],ch);
                freq.erase(ch);
            }
        }
        for(auto&it:freq){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};



