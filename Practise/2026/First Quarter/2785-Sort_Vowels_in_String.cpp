#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<char>vowel;
        for(char ch:s){
            if(isVowel(ch)){
                vowel.push_back(ch);
            }
        }
        sort(vowel.begin(),vowel.end());
        int idx = 0;
        for(int i = 0 ;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=vowel[idx++];
            }else{
                continue;
            }
        }
        return s;
    }
    bool isVowel(char ch){
        if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')){
            return true;
        }
        return false;
    }
};