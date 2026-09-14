#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int n = bottomLeft.size();
        ll ans = 0;
        for(int i =0;i<n;i++){
            int ax1 = bottomLeft[i][0],ay1=bottomLeft[i][1];
            int ax2 = topRight[i][0],ay2=topRight[i][1];
            for(int j=i+1;j<n;j++){
                int bx1 = bottomLeft[j][0],by1=bottomLeft[j][1];
                int bx2 = topRight[j][0],by2=topRight[j][1];
                int breadth = 0;
                int height = 0;
                if (ax2 > bx1 && ay2 > by1 && bx2 > ax1 && by2 > ay1) {
                    breadth = min(ax2, bx2) - max(ax1, bx1);
                    height = min(ay2, by2) - max(ay1, by1);
                }
                int side = min(breadth,height);
                ans=max(ans,(ll)side*(ll)side);
            }
        }
        return ans;
    }
};