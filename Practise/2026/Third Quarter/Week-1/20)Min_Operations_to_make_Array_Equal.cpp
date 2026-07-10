#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(int n) {
        if(n%2!=0){
            int x = n/2;
            return x*(x+1);
        }
        return (n*n)/4;
    }
};


