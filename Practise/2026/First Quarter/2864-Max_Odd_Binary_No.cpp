#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0 ,zero = 0;
        string ans;
        for(char ch :s){
            if(ch == '0'){
                zero++;
            }else{
                one++;
            }
        }
        for(int i = 0 ;i<s.size()-1;i++){
            if(one>1){
                ans+='1';
                one--;
            }else{
                ans+='0';
                zero--;
            }
        }
        ans+='1';
        return ans;
    }
};