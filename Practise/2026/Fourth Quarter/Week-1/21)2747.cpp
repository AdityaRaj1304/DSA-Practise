#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = queries.size();
        sort(logs.begin(),logs.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        vector<pair<int,int>>arr;
        vector<int>ans(m);
        for(int i =0;i<m;i++){
            arr.push_back({queries[i],i});
        }
        sort(arr.begin(),arr.end());
        vector<int>freq(n+1);
        int l=0,r=0,cnt =0;
        for(auto[t,i]:arr){
            while(r<logs.size()&&logs[r][1]<=t){
                if(freq[logs[r][0]]==0){
                    cnt++;
                }
                freq[logs[r][0]]++;
                r++;
            }
            while(l<r&&logs[l][1]<t-x){
                freq[logs[l][0]]--;
                if(freq[logs[l][0]]==0){
                    cnt--;
                }
                l++;
            }
            ans[i]=n-cnt;
        }
        return ans;
    }
};