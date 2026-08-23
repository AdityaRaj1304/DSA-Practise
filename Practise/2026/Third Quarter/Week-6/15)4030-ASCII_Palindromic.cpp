#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool isPalindromic(string s) {
        string ans = "";
        for(char ch:s){
            int ascii = (int)ch;
            string temp(8,'0');
            int idx = 7;
            while(ascii){
                if(ascii%2==1){
                    temp[idx]='1';
                }
                idx--;
                ascii/=2;
            }
            ans+=temp;
        }
    int st = 0 , end = ans.size()-1;
    while(st<end){
        if(ans[st]!=ans[end]){
            return false;
        }
        st++,end--;
    }
    return true;
    }
};


