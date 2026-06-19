#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int num){
        if(num<2){
            return false;
        }
        if(num%2==0){
            return num == 2;
        }
        for(int i = 3 ;i*i<=num;i+=2){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto&it:freq){
            if(isPrime(it.second)){
                return true;
            }
        }
        return false;
    }
};