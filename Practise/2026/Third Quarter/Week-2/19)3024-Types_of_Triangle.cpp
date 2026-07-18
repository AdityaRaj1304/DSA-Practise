#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        string ans = "";
        if(!((a+b)>c && (b+c)>a && (c+a)>b)){
            ans = "none";
        }else if(a==b && b==c){
            ans = "equilateral";
        }else if((a==b)||(b==c)||(c==a)){
            ans="isosceles";
        }else{
            ans="scalene";
        }
        return ans;
    }
};


