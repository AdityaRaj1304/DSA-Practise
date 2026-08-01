#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        int n = planks.size();
        unordered_map<int,int>freq;
        for(int i =0;i<n;i++){
            freq[planks[i]]++;
            for(int j=i+1;j<n;j++){
                freq[planks[i]+planks[j]]++;
            }
        }
        int ans =0;
        for(auto&it:freq){
            ans=max(ans,it.second);
        }
        return ans;
    }
};


