#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int cnt = __builtin_popcount(n);      
        return cnt;
    }
};

