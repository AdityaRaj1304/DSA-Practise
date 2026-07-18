#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool isThree(int n) {
        int ans =0;
        for(int i =1;i*i<=n;i++){
            if(n%i==0){
                if(n/i!=i){
                    ans+=2;
                }else{
                    ans+=1;
                }
                if(ans>3){
                    return false;
                }
            }

        }
        return ans==3?true:false;
    }
};

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1){
            return "";
        }
        return str1.substr(0,gcd(str1.size(),str2.size()));
    }
};