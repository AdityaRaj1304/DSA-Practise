#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.size(), n= t.size();
        int j = 0;
        for(int i=0;i<m &&j<n;i++){
            if(s[i]==t[j]){
                j++;
            }
        }
        return n-j;
    }
};