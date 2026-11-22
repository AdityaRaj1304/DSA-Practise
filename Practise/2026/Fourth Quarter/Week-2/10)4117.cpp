#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minRange(int a, int b, int c) {
        vector<int>arr={a,b,c};
        sort(arr.begin(),arr.end());
        return min(arr.back()-arr[0],arr[1]);
    }
};