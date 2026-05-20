#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxValue(vector<int>& nums1, vector<int>& nums0) {
        string num;
        for(int i = 0 ;i<nums1.size();i++){
            for(int j = 0 ;j<nums1[i];i++){
                num.push_back('1');
            }
            for(int j = 0 ;j<nums0[i];i++){
                num.push_back('0');
            }
        }
    }
};