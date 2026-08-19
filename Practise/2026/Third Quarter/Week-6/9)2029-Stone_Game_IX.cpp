#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int zero = 0 , one = 0 ,two =0;
        for(int stone:stones){
            int mod = stone%3;
            if(mod==0){
                zero++;
            }else if(mod==1){
                one++;
            }else{
                two++;
            }
        }
        int minm = min(one,two);
        one-=minm;
        two-=minm;
        if((one+two+zero)%2==0){
            return true;
        }
        return false;
    }
};