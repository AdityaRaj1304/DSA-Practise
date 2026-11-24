#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countSegments(string s) {
        int ans =0;
        int cnt = 0;
        for(char ch:s){
            if(ch==' '){
                if(cnt>0){
                    ans++;
                    cnt=0;
                }
            }else{
                cnt++;
            }
        }
        return cnt>0?++ans:ans;
    }
};


