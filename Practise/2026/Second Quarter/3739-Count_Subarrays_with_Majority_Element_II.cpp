#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long ans = 0;
        for(int &num:nums){
            if(num==target){
                num=1;
            }else{
                num=-1;
            }
        }
        vector<int>prefix(n+1);
        prefix[0]=nums[0];
        for(int i =1 ;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int temp =n;
        vector<int>freq(2*n+1,0);
        freq[temp]=1;
        
        long long valid = 0;
        int sum = 0;

        for(int i =0;i<n;i++){
            if(prefix[i]>sum){
                valid+=freq[sum+temp];
            }else{
                valid-=freq[prefix[i]+temp];
            }
            ans+=valid;
            freq[prefix[i]+temp]++;
            sum=prefix[i];
        }
        return ans;
    }
};