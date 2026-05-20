#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1;i<s.size();i+=2){
            s[i]=s[i-1]+s[i];
        }
        return s;
    }
};