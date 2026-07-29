#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>prefix(n,0);
        vector<int>ans;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            prefix[i]=sum;
        }
        int m = queries.size();
        for(int i=0;i<m;i++){
            int st = 0,end =n-1;
            int res = 0;
            while(st<=end){
                int mid = st+(end-st)/2;
                if(prefix[mid]<=queries[i]){
                    res=mid+1;
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};



