#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int>left(n,INT_MAX);
        int sum = 0;
        int l = 0 , bestLen=INT_MAX;
        for(int r =0;r<n;r++){
            sum+=arr[r];
            while(sum>target){
                sum-=arr[l];
                l++;
            }
            if(sum==target){
                bestLen=min(bestLen,r-l+1);
            }
            left[r]=bestLen;
        }
        vector<int>right(n,INT_MAX);
        int r = n-1;
        sum=0,bestLen=INT_MAX;
        for(int l =n-1;l>=0;l--){
            sum+=arr[l];
            while(sum>target){
                sum-=arr[r];
                r--;
            }
            if(sum==target){
                bestLen=min(bestLen,r-l+1);
            }
            right[l]=bestLen;
        }
        int ans = INT_MAX;
        for(int i =0;i<n-1;i++){
            if(left[i]!=INT_MAX && right[i+1]!=INT_MAX){
                ans=min(ans,left[i]+right[i+1]);
            }
        }
        return ans==INT_MAX ? -1:ans;
    }
};