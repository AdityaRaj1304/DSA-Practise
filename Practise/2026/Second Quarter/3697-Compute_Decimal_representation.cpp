#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        long long base = 1;
        while(n){
            int digit = n%10;
            if(digit){
                ans.push_back(base*digit);
            }
            n/=10;
            base*=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};