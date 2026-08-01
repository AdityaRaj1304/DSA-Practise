#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countValidPrefixes(string s) {
        int ans =0;
        int zero = 0,one=0;
        for(char ch:s){
            if(ch=='0'){
                zero++;
            }else{
                one++;
            }
            if(abs(zero-one)<=1){
                ans++;
            }
        }
        return ans;
    }
};