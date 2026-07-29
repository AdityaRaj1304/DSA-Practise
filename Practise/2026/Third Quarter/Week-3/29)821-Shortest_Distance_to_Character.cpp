#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int>pos;
        vector<int>ans;
        for(int i =0;i<n;i++){
            if(s[i]==c){
                pos.push_back(i);
            }
        }
        int idx=0 ;
        int m = pos.size();
        for(int i =0;i<n;i++){
            int dist = abs(i-pos[idx]);
            if(idx+1<m && abs(i-pos[idx+1])<dist){
                dist=abs(i-pos[idx+1]);
                idx++;
            }
            ans.push_back(dist);
        }
        return ans;
    }
};