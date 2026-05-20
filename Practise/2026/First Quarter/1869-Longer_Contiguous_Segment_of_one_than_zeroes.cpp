#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkZeroOnes(string s) {
        int zero = 0 , one =0;
        int a = 0 , b= 0;
        for(int i = 0 ;i<s.size();i++){
            if(s[i]=='1'){
                one++;
                zero=0;
                a=max(a,one);
            }else{
                zero++;
                one=0;
                b=max(b,zero);
            }
        }
        return a>b;
    }
};