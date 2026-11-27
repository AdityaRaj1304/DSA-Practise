#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        int ans =0;
        vector<int>freq(1501,0);
        for(auto &it:items){
            freq[it[0]]++;
        }
        vector<int>extra;
        for(int i =0;i<n;i++){
            int fact = items[i][0];
            int copy = freq[fact]-1;
            for(int j=2*fact;j<=1500;j+=fact){
                copy+=freq[j];
            }
            extra.push_back(copy+1);
        }
        vector<int>dp(budget+1,0);
        for(int i=0;i<n;i++){
            int price = items[i][1];
            int copy = extra[i];
            for(int j=budget;j>=price;j--){
                dp[j]=max(dp[j],dp[j-price]+copy);
            }
        }
        for(int i =0;i<n;i++){
            int price = items[i][1];
            for(int j=price;j<=budget;j++){
                dp[j]=max(dp[j],dp[j-price]+1);
            }
        }
        return dp[budget];
    }
};