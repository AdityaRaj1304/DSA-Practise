#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<int>fib;
        fib.push_back(0);
        fib.push_back(1);
        int target = n/2;
        for(int i=2;i<n;i++){
            fib.push_back(fib[i-1]+fib[i-2]);
            if(fib.back()==target){
                return true;
            }else if(fib.back()>target){
                return false;
            }
        }
        return false;
    }
};