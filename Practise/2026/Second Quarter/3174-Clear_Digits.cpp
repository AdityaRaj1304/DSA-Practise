#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string ans;
        ans.push_back(s[0]);
        for(int i = 1;i<s.size();i++){
            if(isalpha(s[i])){
                ans.push_back(s[i]);
            }else{
                ans.pop_back();
            }
        }
        return ans;
    }
};