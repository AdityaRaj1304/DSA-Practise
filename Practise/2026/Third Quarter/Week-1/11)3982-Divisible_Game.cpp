#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divisibleGame(vector<int>& nums) {
        long long mod = 1e9+7;
        int n = nums.size();
        unordered_set<int>div;
        div.insert(2);
        for(int num:nums){
            for(int i = 1;1LL*i*i<=num;i++){
                if(num%i==0){
                    if(i>1){
                        div.insert(i);
                    }
                    int x = num/i;
                    if(x>1){
                        div.insert(x);
                    }
                }
            }
        }

        long long diff= LLONG_MIN;
        int bestK = INT_MAX;
        for(int k:div){
            long long curr = LLONG_MIN;
            long long sum = LLONG_MIN;
            for(int num :nums){
                long long temp;
                if(num%k==0){
                    temp=num;
                }else{
                    temp = -1LL*num;
                }
                if(curr<0){
                    curr=temp;
                }else{
                    curr+=temp;
                }
                sum=max(sum,curr);
            }
            if(sum>diff){
                diff=sum;
                bestK=k;
            }else if(sum==diff){
                bestK=min(k,bestK);
            }
        }
        return (diff%mod+mod)%mod*bestK%mod;
    }
};