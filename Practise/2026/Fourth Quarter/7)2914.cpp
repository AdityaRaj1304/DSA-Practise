#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int ans =0;
        for(int i=1;i<n;i+=2){
            int curr = s[i]-'0'+s[i-1]-'0';
            if(abs(curr)%2){
                ans++;
            }
        }
        return ans;
    }
};