#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> idx(26, -1);
        for (int i = 0; i < s.size(); i++) {
            if (idx[s[i] - 'a'] != -1) {
                if (i - idx[s[i] - 'a'] - 1 != distance[s[i] - 'a']) {
                    return false;
                }
            } else {
                idx[s[i] - 'a'] = i;
            }
        }
        return true;
    }
};


