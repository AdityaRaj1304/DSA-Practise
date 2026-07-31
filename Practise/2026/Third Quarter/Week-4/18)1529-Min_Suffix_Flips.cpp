#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minFlips(string target) {
        int n = target.size();
        int ans = 0;
        char ch ='0';
        for(int i =0;i<n;i++){
            if(target[i]!=ch){
                ans++;
                ch=target[i];
            }
        }
        return ans;
    }
};