#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        int one = 0, zero = 0;
        for(char ch : s){
            if(ch == '0'){
                zero++;
            }else{
                one++;
            }
        }
        int ans = min(one, zero);
        
        if(one > 0){
            ans = min(ans, one - 1);
        }
        
        if(n >= 2){
            int temp = one;
            if(s[0] == '1') {
                temp--;
            }
            if(s[n - 1] == '1') {
                temp--;
            }
            if(s[0] == '0') {
                temp++;
            }
            if(s[n - 1] == '0') {
                temp++;
            }
            ans = min(ans, temp);
        }
        return ans;
    }
};