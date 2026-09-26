#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int helper(int num){
        int pwr =0;
        while(num!=1){
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num = 3 * num + 1;
            }
            pwr++;
        }
        return pwr;
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>ans;
        for(int i =lo;i<=hi;i++){
            ans.push_back({helper(i),i});
        }
        sort(ans.begin(),ans.end());
        return ans[k-1].second;
    }
};