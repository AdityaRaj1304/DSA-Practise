#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minAdjacentSwaps(vector<int>& nums, int a, int b) {
        const ll mod = 1e9+7;
        int x = 0 ,y=0;
        int ans = 0;
        for(int num:nums){
            if(num<a){
                ans+=x+y;
            }else if(num<=b){
                x++;
            }else{
                y++;
            }
        }
        return ans%mod;
    }
};