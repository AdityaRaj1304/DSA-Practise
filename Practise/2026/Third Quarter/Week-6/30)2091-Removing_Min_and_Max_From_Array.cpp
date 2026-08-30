#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n<=2){
            return n;
        }
        int minIdx = 0 , maxIdx = 0;
        int minm = nums[0],maxm = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxm){
                maxIdx=i;
                maxm=nums[i];
            }else if(nums[i]<minm){
                minIdx =  i;
                minm=nums[i];
            }
        } 
        maxm=max(minIdx,maxIdx);
        minm =min(minIdx,maxIdx);
        int ans=(minm+1)+(n-maxm);
        ans=min(ans,min(maxm+1,n-minm));
        return ans;
    }
};