#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1){
            return s;
        }
        ll count = n/2;
        return s+count*(1LL*(m-1))+1;
    }
};