#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n = weight.size();
        int ans =0;
        int maxm = weight[0];
        for(int i =1;i<n;i++){
            maxm=max(maxm,weight[i]);
            if(weight[i]<maxm){
                ans++;
                maxm=weight[i];
                maxm=0;
            }
        }
        return ans;
    }
};

