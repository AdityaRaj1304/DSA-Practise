#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int splitNum(int num) {
        vector<int>freq(10,0);
        while(num){
            int digit =num%10;
            freq[digit]++;
            num/=10;
        }
        string x = "" ,y="";
        bool turn = true;
        for(int i =0;i<10;i++){
            while(freq[i]--){
                if(turn){
                    x+=char(i+'0');
                }else{
                    y+=char(i+'0');
                }
                turn=!turn;
            }
        }
        int a = x.empty() ? 0:stoi(x);
        int b = y.empty() ? 0:stoi(y);
        return a+b;
    }
};

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int ans = 0;
        int prev = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i]==prev){
                continue;
            }else{
                ans+=i;
            }
        }
        return ans;
    }
};