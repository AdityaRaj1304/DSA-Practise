#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        ll ans = 0;
        int a = -1,b=-1;
        int last = -1;
        for(int l=0,r=0;r<n;r++){
            if(s[r]=='a'){
                a=r;
            }else if(s[r]=='b'&&a!=-1){
                b=r;
                last=a;
            }else if(s[r]=='c'&&b!=-1){
                l=max(l,last+1);
            }
            ans+=r-l+1;
        }
        return ans;
    }
};