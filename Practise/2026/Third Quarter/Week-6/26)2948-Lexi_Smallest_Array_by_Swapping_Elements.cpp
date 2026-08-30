#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int>ans(n);
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        int i= 0;
        while(i<n){
            int j = i+1;
            while(j<n && arr[j].first-arr[j-1].first<=limit){
                j++;
            }
            vector<int>temp;
            for(int k=i;k<j;k++){
                temp.push_back(arr[k].second);
            }
            sort(temp.begin(),temp.end());
            for(int k =0;k<temp.size();k++){
                ans[temp[k]]=arr[i+k].first;
            }
            i=j;
        }
        return ans;
    }
};