#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(char ch:s){
            if(islower(ch)){
                lower[ch-'a']++;
            }else{
                upper[ch-'A']++;
            }
        }
        int ans = 0;
        bool odd = false;
        for(int i=0;i<26;i++){
            if(lower[i]){
                if(lower[i]%2){
                    ans+=lower[i]-1;
                    odd=true;
                }else{
                    ans+=lower[i];
                }
            }
            if(upper[i]){
                if(upper[i]%2){
                    ans+=upper[i]-1;
                    odd=true;
                }else{
                    ans+=upper[i];
                }
            }
        }
        if(odd){
            return ans+1;
        }
        return ans;
    }
};


