#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double angleClock(int hour, int minutes) {
        if (hour >= 12) {
            hour -= 12;
        }
        double h = (hour * 30.0) + (minutes / 2.0);
        double m = (minutes * 6.0);
        return min(abs(h - m), (360 - abs(m - h)));
    }
};