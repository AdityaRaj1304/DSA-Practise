#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k>numOnes){
            k-=numOnes;
            if(k>numZeros){
                k-=numZeros;
                return numOnes+numZeros-min(k,numNegOnes);
            }else{
                return numOnes;
            }
        }else{
            return k;
        }
    }
};




