#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size();
        map<pair<int,int>,int>count;
        int ans = 0;
        int pairs =0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                ans++;
            }else{
                int x = nums[i];
                int y = nums[i-1];
                if(x<y){
                    swap(x,y);
                }
                count[{x,y}]++;
                pairs=max(pairs,count[{x,y}]);
            }
        }
        ans+=pairs;
        return ans;
    }
};