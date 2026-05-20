#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans =0;
        vector<bool>prime=prime_no();
        for(int i = 0 ;i<nums.size();i++){
            int num = nums[i];
            if(i%2==0){
                while(!prime[num]){
                    num++;
                }
                ans+=num-nums[i];
            }else{
                while(prime[num]){
                    num++;
                }
                ans+=num-nums[i];
            }
        }
        return ans;
    }
    vector<bool> prime_no(){
        vector<bool>numbers(100000,true);
        numbers[0]=false,numbers[1]=false;
        for(int i = 2 ;i*i<numbers.size();i++){
            if(numbers[i]){
                for(int j = i*i;j<numbers.size();j+=i){
                    numbers[j]=false;
                }
            }
        }
        return numbers;
    }
};