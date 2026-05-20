#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int temp = num ;
        int ans = 0 ;
        while(num){
            int digit = num%10;
            if(temp%digit==0){
                ans++;
            }
            num/=10;
        }
        return ans;
    }
};