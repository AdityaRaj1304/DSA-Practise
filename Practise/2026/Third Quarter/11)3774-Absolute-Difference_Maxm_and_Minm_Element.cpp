#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        vector<int>freq(101,0);
        for(int num:nums){
            freq[num]++;
        }
        int maxSum = 0 , minSum=0;
        int count=k;
        for(int i =0;i<101;i++){
            if(freq[i]<=count){
                count-=freq[i];
                minSum+=i*freq[i];
            }else{
                minSum+=i*count;
                break;
            }
        }
        count=k;
        for(int i =100;i>0;i--){
            if(freq[i]<=count){
                count-=freq[i];
                maxSum+=i*freq[i];
            }else{
                maxSum+=i*count;
                break;
            }
        }
        return maxSum-minSum;
    }
};

