#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j]=-baskets[j];
                    count++;
                    break;
                }
            }
        }
        return n-count;
    }
};