#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size();
        int ans = 0;
        for(int i =0;i<n-2;i++){
            if(s[i]=='X'){
                s[i+1]='O';
                s[i+2]='O';
                ans++;
            }
        }
        if(s[n-2]=='X' ||s[n-1]=='X'){
            return ans+1;
        }
        return ans;
    }
};