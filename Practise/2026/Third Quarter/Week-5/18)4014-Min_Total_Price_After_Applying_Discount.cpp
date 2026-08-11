#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        double ans =0.0;
        int i =0;
        while(i<prices.size()&&i<discounts.size()){
            ans+=prices[i]*(double)(100-discounts[i])/100;
            i++;
        }
        while(i<prices.size()){
            ans+=double(prices[i++]);
        }
        return ans;
    }
};


class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>children(n);
        for(int i=0;i<parent.size();i++){
            children[parent[i]].push_back(i);
        }
        int height = 1;
        vector<int>depth(n);
        depth[0]=1;
        queue<int>q;
        q.push(0);
        while(q.size()>0){
            int par = q.front();
            q.pop();
            height=max(height,depth[par]);
            for(auto child:children[par]){
                depth[child]=depth[par]+1;
                q.push(child);
            }
        }
        ll ans =0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i]*(height-depth[i]+1);
        }
        return ans;
    }
};


