#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int ans = 0;
        int lower = max(0,n-k);
        int upper = n+k;
        for(int i = lower;i<=upper;i++){
            if((n & i)==0){
                ans+=i;
            }
        }
        return ans;
    }
};



