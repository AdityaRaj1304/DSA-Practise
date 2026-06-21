#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        string temp(n, '.');
        ans.push_back(temp);
        for (int i = 1; i < m; i++) {
            string temp(n, '#');
            temp[n - 1] = '.';
            ans.push_back(temp);
        }
        return ans;
    }
};