#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        unordered_set<string>dist;
        for(auto& s:words){
            if(dist.find(s)!=dist.end()){
                ans++;
                dist.erase(s);
            }else{
                reverse(s.begin(),s.end());
                dist.insert(s);
            }
        }
        return ans;
    }
};


