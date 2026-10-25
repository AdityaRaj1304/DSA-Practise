#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minRotations(string s) {
        int n = s.size();
        int ans =min(s[0]-'0',10-(s[0]-'0'));
        for(int i=1;i<n;i++){
            int curr = s[i]-'0';
            int prev = s[i-1]-'0';
            int diff = abs(curr - prev);
            ans += min(diff, 10 - diff);
        }
        return ans;
    }
};