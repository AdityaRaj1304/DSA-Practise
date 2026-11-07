#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        ll ans = 0;
        for(int l=0,r=0;r<n;r++){
            if(r>2&&(s[r]=='c'&&s[r-1]=='b'&&s[r-2]=='a')){
                l=r-2;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};