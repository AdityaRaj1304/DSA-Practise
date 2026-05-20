#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSequences(vector<int>& nums, long long k) {
        int ans = 0;
        helper(nums,k,0,1,1,ans);
        return ans;
    }
    void helper(vector<int>&nums,long long k , int idx , long long num , long long den,int&ans){
        long long g = gcd(num,den);
        num/=g;
        den/=g;
        if(idx==nums.size()){
            if(num == k && den ==1){
                ans++;
            }
            return;
        }
        helper(nums,k,idx+1,num*nums[idx],den,ans);
        if(nums[idx]!=0){
            helper(nums,k,idx+1,num,den*nums[idx],ans);
        }
        helper(nums,k,idx+1,num,den,ans);
    }
    long long gcd(long long a , long long b){
        while(b!=0){
            long long r = a%b;
            a=b;
            b=r;
        }
        return a;
    }
};

class Solution {
public:
    int countSequences(vector<int>& nums, long long k) {
        int ans = 0;
        helper(nums,k,0,1,1,ans);
        return ans;
    }
    void helper(vector<int>&nums,long long k , int idx , long long num , long long den,int&ans){
        if(idx==nums.size()){
            if(num == k*den){
                ans++;
            }
            return;
        }
        helper(nums,k,idx+1,num*nums[idx],den,ans);
        helper(nums,k,idx+1,num,den*nums[idx],ans);
        helper(nums,k,idx+1,num,den,ans);
    }
};