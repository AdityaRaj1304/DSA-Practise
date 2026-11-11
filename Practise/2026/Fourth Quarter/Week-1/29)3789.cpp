#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1>=need2){
            return min(cost1+cost2,costBoth)*need2+min(cost1,costBoth)*(need1-need2);
        }else{
            return min(cost1+cost2,costBoth)*need1+min(cost2,costBoth)*(need2-need1);
        }
    }
};