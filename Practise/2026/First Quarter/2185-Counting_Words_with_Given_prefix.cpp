#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans =0;
        for(int i = 0;i<words.size();i++){
            if(helper(words[i],pref,pref.size())){
                ans++;
            }
        }
        return ans;
    }
    bool helper(string s , string pref , int n){
        for(int i = 0 ; i<n;i++){
            if(s[i]!=pref[i]){
                return false;
            }
        }
        return true;
    }
};