#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string check(string &num){
        if(num[0]!='0'){
            return num;
        }
        string ans ="";
        bool zero = true;
        for(char ch:num){
            if(zero){
                if(ch!='0'){
                    ans+=ch;
                    zero=false;
                }
            }else{
                ans+=ch;
            }
        }
        return zero ? "0":ans;
    }
    int numDifferentIntegers(string word) {
        unordered_set<string>s;
        string num ="";
        for(char ch:word){
            if(isdigit(ch)){
                num+=ch;
            }else if(num.size()>0){

                s.insert(check(num));
                num="";
            }
        }
        if(num.size()>0){
            s.insert(check(num));
        }
        return s.size();
    }
};