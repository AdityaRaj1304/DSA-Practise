#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;
        long long pos = 1;
        while (n) {
            int digit = n % 10;
            if (digit) {
                sum += digit;
                x = digit * pos + x;
                pos *= 10;
            }
            n /= 10;
        }
        return x * sum;
    }
};

