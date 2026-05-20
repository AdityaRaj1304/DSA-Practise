#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans =INT_MAX;
        for(int num :nums){
            if(abs(num)<abs(ans)){
                ans=num;
            }else if(abs(num)==abs(ans)){
                if(num>ans){
                    ans=num;
                }
            }
        }
        return ans;
    }
};