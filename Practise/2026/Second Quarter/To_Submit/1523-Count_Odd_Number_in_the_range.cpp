#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        bool x = false , y = false;
        if(low%2!=0){
            x=true;
            ans++;
        }
        if(high%2!=0){
            y=true;
            ans++;
        }
        if(x && y){
            ans+=(high-low-1)/2;
        }else if(x ^ y){
            ans+=(high-low-1)/2;
        }else{
            ans++(high-low)/2;
        }
        return ans;
    }
};

// One line solution 
class Solution {
public:
    int countOdds(int low, int high) {
        return (high - low + 1) / 2 + (low % 2 && high % 2);
    }
};