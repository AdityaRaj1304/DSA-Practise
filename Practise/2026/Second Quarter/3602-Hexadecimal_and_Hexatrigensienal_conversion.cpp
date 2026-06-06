#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string hexadecimal(long long n){
        string ans ="";
        while(n){
            int digit = n%16;
            n/=16;
            if(digit<10){
                ans+=digit+'0';
            }else{
                ans+=(digit-10)+'A';
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string hexatrigesima(long long n){
        string ans ="";
        while(n){
            int digit = n%36;
            n/=36;
            if(digit<10){
                ans+=digit+'0';
            }else{
                ans+=(digit-10)+'A';
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string concatHex36(int n) {
        string ans = "";
        long long num = n*n;
        ans+=hexadecimal(num);
        num*=n;
        ans+=hexatrigesima(num);
        return ans;
    }
};