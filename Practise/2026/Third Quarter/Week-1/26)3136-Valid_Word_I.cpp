#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        int n = word.size();
        if(n<3){
            return false;
        }
        bool vowel =false, cons=false;
        for(char ch:word){
            if(isalnum(ch)){
                if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
                    vowel = true;
                }else if(isalpha(ch)){
                    cons = true;
                }
            }else{
                return false;
            }
        }
        return vowel&&cons;
    }
};

class Solution {
public:
    int minimumPushes(string word) {
        int n= word.size();
        int ans =0;
        for(int i=0;i<n;i++){
            if(i<8){
                ans++;
            }else if(i<16){
                ans+=2;
            }else{
                ans+=3;
            }
        }
        return ans;
    }
};