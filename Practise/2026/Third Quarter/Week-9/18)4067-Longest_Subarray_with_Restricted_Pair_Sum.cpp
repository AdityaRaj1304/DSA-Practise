#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int l=0;l<n;l++){
            vector<bool>sum(1001,false);
            vector<bool>diff(501,false);
            vector<int>freq(501,0);
            vector<int>seen;
            int r =0;
            for(r=l;r<n;r++){
                int num = nums[r];
                if(sum[num]||diff[num]){
                    break;
                }
                if(freq[num]==0){
                    for(int x:seen){
                        sum[num+x]=true;
                        diff[abs(num-x)]=true;
                    }
                    seen.push_back(num);
                }else if(freq[num]==1){
                    sum[2*num]=true;
                }
                freq[num]++;
            }
            ans=max(ans,r-l);
        }
        return ans;
    }
};