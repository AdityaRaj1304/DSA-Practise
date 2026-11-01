#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int smallestpf(int num){
        if(num%2==0){
            return 2;
        }
        for(int i =3;i*i<=num;i+=2){
            if(num%i==0){
                return i;
            }
        }
        return num;
    }
    long long minimumMaxValue(int n, int index, int value) {
        if(value==1){
            return -1;
        }
        int pf = smallestpf(value);
        if(index>0 && value-pf<2*index){
            return -1;
        }
        int right = n-index-1;
        if(right==0){
            return value;
        }
        return value+pf+2LL*(right-1);
    }
};