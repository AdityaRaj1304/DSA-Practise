#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        bool turn =true;
        while(n){
            if(n%2){
                if(turn){
                    even++;
                }else{
                    odd++;
                }
            }
            n/=2;
            turn=!turn;
        }
        return {even,odd};
    }
};