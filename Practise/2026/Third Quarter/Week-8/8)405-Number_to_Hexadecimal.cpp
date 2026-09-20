#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string hexDecimal(int n){
        string ans = "";
        while(n){
            int digit = n%16;
            if(digit>10){
                ans+=(char)digit-10+'a';
            }else{
                ans+=digit-'0';
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string toHex(int num) {
        if(num<0){
            return hexDecimal(~num+1);
        }
        return hexDecimal(num);
    }
};