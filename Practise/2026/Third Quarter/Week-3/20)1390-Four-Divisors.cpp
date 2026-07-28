#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int valid(int num){
        int count =2;
        int sum = num+1;
        for(int i =2;i*i<=num;i++){
            if(count>4){
                return 0;
            }
            if(num%i==0){
                sum+=i;
                count++;
                if(num/i!=i){
                    sum+=(num/i);
                    count++;
                }
            }
        }
        return count==4 ? sum :0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans =0;
        for(int num:nums){
            int curr = valid(num);
            if(curr){
                ans+=curr;
            }
        }
        return ans;
    }
};




