#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int ans = 0;
        int zero = 0 , one = 0;
        for(char ch:s){
            if(ch=='0'){
                if(one==0){
                    zero++;
                }else{
                    zero=1;
                    one = 0;
                }
            }else{
                if(zero>0){
                    one++;
                    ans=max(ans,2*min(one,zero));
                }
            }
        }
        return ans;
    }
};

