#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<bool>n(10,false);
        int x = 10,y=10;
        for(int num:nums1){
            x=min(x,num);
            n[num]=true;
        }
        for(int num:nums2){
            if(n[num]){
                return num;
            }
            y=min(y,num);
        }
        return min(x,y)*10+max(x,y);
    }
};
