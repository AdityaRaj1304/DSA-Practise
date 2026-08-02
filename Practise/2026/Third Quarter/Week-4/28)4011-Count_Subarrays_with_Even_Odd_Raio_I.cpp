#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int ans =0;
        for(int i =0;i<n;i++){
            int sum =0;
            for(int j =i;j<n;j++){
                if(nums[j]%2==0){
                    sum+=b;
                }else{
                    sum-=a;
                }
            }
        }
    }
};

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int ans =0;
        int odd = 0 ,even =0;
        for(int i =0;i<n;i++){
            for(int j =i;j<n;j++){
                if(nums[j]%2==0){
                    even++;
                }else{
                    odd++;
                }
                if(odd && odd*b-even*a<=0){
                    ans++;
                }
            }
        }
        return ans;
    }
};