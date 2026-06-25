#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxm = *max_element(costs.begin(),costs.end());
        vector<int>freq(maxm+1,0);
        int ans= 0;
        for(int num:costs){
            freq[num]++;
        }
        for(int i =1;i<=maxm;i++){
            if(freq[i]==0){
                continue;
            }
            int cost = min(freq[i],coins/i);
            ans+=cost;
            coints-=(cost*i);
            if(coins<i){
                break;
            }
        }
        return ans;
    }
};



