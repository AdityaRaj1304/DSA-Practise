#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool checkString(string s) {
        for(int i = 1 ;i<s.size();i++){
            if(s[i]=='a' &&s[i-1]=='b'){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool checkString(string s) {
        return s.find("ba")==string::npos;
    }
};