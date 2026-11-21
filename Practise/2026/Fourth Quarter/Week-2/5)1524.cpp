#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    const ll MOD = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        ll sum =0;
        ll odd =0 , even =1;
        for(int num:arr){
            sum=(sum+num)%2;
            if(sum==1){
                odd++;
            }else{
                even++;
            }
        }
        return (even*odd)%MOD;
    }
};