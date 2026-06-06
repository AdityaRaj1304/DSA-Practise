#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0){
            return false;
        }
        int part = sum/3;
        int temp =0;
        bool first = false , second = false;
        for(int num:arr){
            temp+=num;
            if(temp==part){
                temp=0;
                if(!first){
                    first=true;
                }else if(!second){
                    second=true;
                }else{
                    return true;
                }
            }
        }
        return false;
    }
};