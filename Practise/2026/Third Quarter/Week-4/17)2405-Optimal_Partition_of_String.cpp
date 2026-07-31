#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int partitionString(string s) {
        vector<int>freq(26,0);
        int ans =1;
        for(char ch:s){
            if(freq[ch-'a']==1){
                ans++;
                fill(freq.begin(), freq.end(), 0);
            }
            freq[ch-'a']++;
        }
        return ans;
    }
};