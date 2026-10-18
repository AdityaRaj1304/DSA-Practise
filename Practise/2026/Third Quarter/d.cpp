#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> maxPrimeSubset(int n, int s) {
        if(n==1 || s==1){
            return {};
        }
        vector<bool>prime(n+1,true);
        vector<int>ans;
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        vector<int>num;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                num.push_back(i);
            }
        }
        
    }
};