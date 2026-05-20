#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size()!=s.size()){
            return false;
        }
        for(int i = 0;i<s.size();i++){
            string word = words[i];
            if(word[0]!=s[i]){
                return false;
            }
        }
        return true;
    }
};