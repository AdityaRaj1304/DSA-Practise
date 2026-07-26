#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN,b=INT_MIN,c=INT_MIN;
        int x = INT_MAX, y = INT_MAX;
        for(int num:nums){
            int pa = a , pb = b ,px=x;
            a=max(a,num);
            b=max(b,min(num,pa));
            c=max(c,min(num,pb));

            x= min(x,num);
            y=min(y,max(num,px));
        }
        int ans = max(a*b*c,a*x*y);
        return ans;
    }
};