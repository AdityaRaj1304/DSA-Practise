#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string reverseParentheses(string s) {
        string word ="";
        stack<string>st;
        for(char ch:s){
            if(ch=='('){
                st.push(word);
                word="";
            }else if(ch==')'){
                reverse(word.begin(),word.end());
                word=st.top()+word;
                st.pop();
            }else{
                word+=ch;
            }
        }
        return word;
    }
};