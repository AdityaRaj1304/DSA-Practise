#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        int idx = 0;
        string ans ="";
        while(idx<n){
            if(command[idx]=='G'){
                ans+='G';
                idx++;
            }else if(command[idx]=='('){
                if(command[idx+1]==')'){
                    ans+='o';
                    idx+=2;
                }else{
                    ans+="al";
                    idx+=4;
                }
            }
        }
        return ans;
    }
};