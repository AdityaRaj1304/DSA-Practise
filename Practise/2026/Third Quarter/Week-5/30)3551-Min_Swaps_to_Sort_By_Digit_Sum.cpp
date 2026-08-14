#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int digitSum(int num){
        int sum =0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>>v;
        for(int i =0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end(),[&](auto a,auto b){
            int sumA= digitSum(a.first);
            int sumB =  digitSum(b.first);
            if(sumA==sumB){
                return a.first<b.first;
            }
            return sumA<sumB;
        });
        vector<bool>vis(n,false);
        int ans=0;
        for(int i =0;i<n;i++){
            if(vis[i]||v[i].second==i){
                continue;
            }
            int cycleSize =0;
            int j =i;
            while(!vis[j]){
                vis[j]=true;
                j=v[j].second;
                cycleSize++;
            }
            ans+=cycleSize-1;
        }
        return ans;
    }
};



