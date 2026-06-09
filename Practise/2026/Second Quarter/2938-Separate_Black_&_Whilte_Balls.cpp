#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        long long black = 0;
        for(char ch:s){
            if(ch=='0'){
                ans+= black;
            }else{
                black++;
            }
        }
        return ans;
    }
};

