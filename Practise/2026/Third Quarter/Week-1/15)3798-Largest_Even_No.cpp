#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestEven(string s) {
        int n = s.size();
        int idx = n-1;
        while(idx>=0){
            char ch = s[idx];
            if((ch-'0')%2==0){
                return s.substr(0,idx+1);
            }else{
                idx--;
            }
        }
        return "";
    }
};


