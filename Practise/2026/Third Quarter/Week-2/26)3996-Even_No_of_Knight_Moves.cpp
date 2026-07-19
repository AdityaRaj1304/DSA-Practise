#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int st = (start[0]+start[1])%2;
        int end = (target[0]+target[1])%2;
        return st == end ? true:false;
    }
};