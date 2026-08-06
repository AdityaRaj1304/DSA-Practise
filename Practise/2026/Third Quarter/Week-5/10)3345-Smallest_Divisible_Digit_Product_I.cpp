#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i =n;i<n+10;i++){
            int num =i;
            int product = 1;
            while(num){
                product*=num%10;
                num/=10;
            }
            if(product%t==0){
                return i;
            }
        }
        return -1;
    }
};

