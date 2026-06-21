#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(string moves) {
        int ans = 0;
        int x = 0 , y =0;
        int extra = 0;
        for(char ch:moves){
            if(ch=='U'){
                y++;
            }else if(ch=='D'){
                y--;
            }else if(ch=='R'){
                x++;
            }else if(ch=='L'){
                x--;
            }else{
                extra++;
            }
        }
        return abs(x)+abs(y)+extra;
    }
};