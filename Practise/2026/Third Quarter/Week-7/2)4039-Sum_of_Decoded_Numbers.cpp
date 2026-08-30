#include <bits/stdc++.h>
using namespace std;
using ll = long long;

using ll = long long;
class Solution {
public:
    int MOD = 1e9+7;
    ll power(ll b, long long exp) {
        ll ans = 1;
        b %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) {
                ans = (ans * b) % MOD;
            }
            b = (b * b) % MOD;
            exp /= 2;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        int ans = 0;
        for(ll num:nums){
            int w = num%10;
            string s = to_string(num/10);
            int x = 0 , y =0;
            for(int i =0;i<s.size();i++){
                if(i<w){
                    x = x*10 + (s[i]-'0');
                }else{
                    y = y*10 + (s[i]-'0');
                }
            }
            ans=(ans+power(x,y))%MOD;
        }
        return ans;
    }
};