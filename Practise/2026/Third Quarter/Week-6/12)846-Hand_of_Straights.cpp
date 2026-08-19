#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool helper(vector<int>& hand, int groupSize, int i) {
        int n = hand.size();
        int next = hand[i] + 1;
        hand[i] = -1;
        int size = 1;
        i++;
        while (i < n && size < groupSize) {
            if (hand[i] == next) {
                size++;
                next = hand[i] + 1;
                hand[i] = -1;
            }
            i++;
        }
        return size == groupSize;
    }
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if (n % groupSize != 0) {
            return false;
        }
        sort(hand.begin(), hand.end());
        for (int i = 0; i < n; i++) {
            if (hand[i] >= 0) {
                if (!helper(hand, groupSize, i)) {
                    return false;
                }
            }
        }
        return true;
    }
};


