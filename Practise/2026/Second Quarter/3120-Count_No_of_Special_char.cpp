#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans =0;
        vector<int>lower(26,0),upper(26,0);
        for(char ch:word){
            if(ch>='a' && ch<='z'){
                lower[ch-'a']=1;
            }else{
                upper[ch-'A']=1;
            }
        }
        for(int i =0;i<26;i++){
            if(lower[i]&&upper[i]){
                ans++;
            }
        }
        return ans;
    }
};