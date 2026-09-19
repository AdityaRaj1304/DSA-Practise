#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearestX = (x1>=xCenter)?x1:(x2<=xCenter)?x2:xCenter;
        int nearestY = (y1>=yCenter)?y1:(y2<=yCenter)?y2:yCenter;
        int dx = nearestX-xCenter;
        int dy = nearestY-yCenter;
        return (dx*dx+dy*dy)<=radius*radius;
    }
};


