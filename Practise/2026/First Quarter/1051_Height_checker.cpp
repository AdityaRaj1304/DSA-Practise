#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expect=heights;
        sort(expect.begin(),expect.end());
        int ans = 0;
        for(int i = 0;i<heights.size();i++){
            if(heights[i]!=expect[i]){
                ans++;
            }
        }
        return ans;
    }
};