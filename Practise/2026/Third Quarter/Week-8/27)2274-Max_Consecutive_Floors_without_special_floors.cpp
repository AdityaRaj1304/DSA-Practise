#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int ans = 0;
        sort(special.begin(),special.end());
        for(int i =0;i<special.size();i++){
            ans=max(ans,special[i]-bottom);
            bottom=special[i]+1;
        }
        return max(ans,top-bottom+1);
    }
};