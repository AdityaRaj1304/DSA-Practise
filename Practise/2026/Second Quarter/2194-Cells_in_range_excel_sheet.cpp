#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        for(char col = s[0];col<=s[3];col++){
            for(char row = s[1];row<=s[4];row++){
                string temp ="";
                temp.push_back(col);
                temp.push_back(row);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
