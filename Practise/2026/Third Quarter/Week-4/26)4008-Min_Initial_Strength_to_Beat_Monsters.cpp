#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n = monsters.size();
        vector<ll>boost(n,0);
        for(auto&v:boosts){
            for(int i =v[0];i<=v[1];i++){
                boost[i]+=v[2];
            }
        }
        int ans = 0;
        for(int i =0;i<n;i++){
            int required = monsters[i]-boost[i];
            if(required<=0){
                continue;
            }else{
                ans=max(ans,required);
            }
        }
        return ans;
    }
};


class Solution {
public:
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n = monsters.size();
        ll ans =0;
        vector<ll>diff(n+1,0);
        vector<ll>boost;
        for(auto&v:boosts){
            diff[v[0]]+=v[2];
            diff[v[1]+1]-=v[2];
        }
        ll curr = 0;
        for(ll b:diff){
            curr+=b;
            boost.push_back(curr);
        }
        for(int i =n-1;i>=0;i--){
            if(ans>0){
                ans+=monsters[i];
            }else{
                ans=max(0LL,(ll)monsters[i]-boost[i]);
            }
        }
        return ans;
    }
};