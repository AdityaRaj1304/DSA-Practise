#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool words[26]={false};
        for(char ch : brokenLetters){
            words[ch-'a']=true;
        }
        int ans = 0 ;
        bool correct = true;
        for(char ch : text){
            if(ch == ' '){
                if(correct){
                    ans++;
                }
                correct = true;
            }else if(words[ch -'a'] == true){
                correct=false;
            }
        }
        if(correct){
            ans++;
        }
        return ans;
    }
};