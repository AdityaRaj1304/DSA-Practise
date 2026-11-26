#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canAliceWin(int n) {
        bool ans = false;
        int stones = 10;
        while(n){
            if(n<stones){
                return ans;
            }else{
                n-=stones;
                stones--;
                ans=!ans;
            }
        }
        return ans;
    }
};