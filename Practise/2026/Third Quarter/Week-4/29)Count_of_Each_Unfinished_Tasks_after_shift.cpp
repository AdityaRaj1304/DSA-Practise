#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();
        vector<ll>prefix(n+1,0);
        vector<int>ans;
        for(int i =0;i<n;i++){
            prefix[i+1]=prefix[i]+tasks[i];
        }
        ll total = prefix[n];
        ll curr = 0;
        for(ll s:shifts){
            ll remaining = total-curr;
            if(s>=remaining){
                ans.push_back(0);
                curr=0;
            }else{
                curr+=s;
                int st = 0, end =n, task =0;
                while(st<=end){
                    int mid = st+(end-st)/2;
                    if(prefix[mid]<=curr){
                        task=mid;
                        st=mid+1;
                    }else{
                        end = mid-1;
                    }
                }
                ans.push_back(n-task);
            }
        }
        return ans;
    }
};©leetcode