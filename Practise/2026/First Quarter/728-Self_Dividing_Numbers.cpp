#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i = left;i<=right;i++){
            if(helper(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
    bool helper(int num){
        int temp = num;
        while(num){
            int digit = num%10;
            if(digit!=0){
                if(temp%digit!=0){
                return false;
                }
            }else{
                return false;
            }
        num/=10;
    }
        return true;
    }
};2