#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxm(n,0);
        maxm[0]=nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]>maxm[i-1]){
                maxm[i]=nums[i];
            }else{
                maxm[i]=maxm[i-1];
            }
        }
        int ans = 0;
        for(int i =k;i<n;i++){
            ans=max(ans,nums[i]+maxm[i-k]);
        }
        return ans;
    }
};


class Solution {
public:
    int minOperations(string s1, string s2) {
        int n = s1.size();
        int ans = 0;
        if(n==1 && s1=="1" && s2=="0"){
            return -1;
        }
        for(int i =0;i<n;i++){
            if(s1[i]=='0' && s2[i]=='1'){
                ans++;
            }else if(s1[i]=='1'&&s2[i]=='0'){
                if(i+1<n&&s1[i+1]=='1' &&s2[i+1]=='0'){
                    ans++;
                    i++;
                }
            }else{
                ans+=2;
            }
        }
        return ans;
    }
};