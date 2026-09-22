#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int maxm = max({a,b,c});
        if(2*maxm>(a+b+c)){
            return a+b+c-maxm;
        }
        return (a+b+c)/2;
    }
};