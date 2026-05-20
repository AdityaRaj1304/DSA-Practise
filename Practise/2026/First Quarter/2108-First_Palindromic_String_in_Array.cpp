#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(pal(s)){
                return s;
            }
        }
        return "";
    }
    bool pal(string s){
        int i = 0 , j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
};