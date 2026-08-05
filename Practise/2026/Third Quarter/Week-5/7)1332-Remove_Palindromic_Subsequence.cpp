#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int removePalindromeSub(string s) {
        int st = 0, end=s.size()-1;
        bool pal = true;
        while(st<end){
            if(s[st]!=s[end]){
                pal=false;
                break;
            }
            st++,end--;
        }
        return pal ? 1:2;
    }
};