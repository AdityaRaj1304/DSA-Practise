#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string x = "" , y = "";
        for(char ch:s){
            if(ch=='#'){
                if(!x.empty()){
                    x.pop_back();
                }
            }else{
                x+=ch;
            }
        }
        for(char ch:t){
            if(ch=='#'){
                if(!y.empty()){
                    y.pop_back();
                }
            }else{
                y+=ch;
            }
        }
        cout << x << " " << y;
        return x==y;
    }
};