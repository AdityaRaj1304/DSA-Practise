#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int c1 = (coordinate1[0]-'a')+(coordinate1[1]-'1');
        int c2 = (coordinate2[0]-'a')+(coordinate2[1]-'1');
        return c1%2==c2%2 ? true:false;
    }
};