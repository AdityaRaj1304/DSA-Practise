#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int reinitializePermutation(int n) {
        int ans =0;
        int num =1;
        do{
            if(num<n/2){
                num*=2;
            }else{
                num=(num*2)-(n-1);
            }
            ans++;
        }while(num!=1);
        return ans;
    }
};

