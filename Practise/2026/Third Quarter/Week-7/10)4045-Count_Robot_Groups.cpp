#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countGroups(vector<int>& position, vector<int>& speed, int distance) {
        int n = position.size();
        int ans = 1;
        int s = speed[n-1];
        for(int i=n-2;i>=0;i--){
            if((position[i+1]-position[i])<=distance || speed[i]>s){
                continue;
            }
            s=speed[i];
            ans++;
        }
        return ans;
    }
};