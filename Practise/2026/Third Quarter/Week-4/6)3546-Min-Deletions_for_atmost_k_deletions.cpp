#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minDeletion(string s, int k) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        sort(freq.begin(),freq.end());
        int ans =0;
        for(int i =0;i<26-k;i++){
            ans+=freq[i];
        }
        return ans;
    }
};