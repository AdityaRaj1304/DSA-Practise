#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        if(n==1){
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
        ll sum =0;
        for(int i=2;i<=n;i++){
            if(prime[i]){
                if(i+sum<=s){
                    ans.push_back(i);
                    curr+=i;
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};