#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;
        bool count = true;
        for(char ch:s){
            if(ch == '|'){
                count = !(count);
            }
            if(ch == '*'){
                if(count){
                    ans++;
                }
            }
        }
        return ans;
    }
};