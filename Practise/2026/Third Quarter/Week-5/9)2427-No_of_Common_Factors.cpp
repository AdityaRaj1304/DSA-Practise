#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int commonFactors(int a, int b) {
        int n = min(a,b);
        int x = max(a,b);
        int ans =0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(x%i==0){
                    ans++;
                }
                if(n!=i*i){
                    if(x%(n/i)==0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int commonFactors(int a, int b) {
        int g = gcd(a,b);
        int ans =0;
        for(int i=1;i<=sqrt(g);i++){
            if(g%i==0){
                ans++;
                if(g!=i*i){
                     ans++;
                }
            }
        }
        return ans;
    }
};

