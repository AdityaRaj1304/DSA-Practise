#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =0;i<n;i++){
            unordered_map<int,int>freq;
            vector<int>arr;
            for(int j=i;j<n;j++){
                int num = nums[j];
                if(freq[num]==0){
                    arr.push_back(num);
                }
                freq[num]++;
                int l = arr.size();
                if(j-i+1!=(l*(l+1))/2){
                    continue;
                }
                bool valid = true;
                for(int k=0;k<l;k++){
                    if(freq[arr[k]]!=k+1){
                        valid=false;
                        break;
                    }
                }
                if(valid){
                    ans++;
                }
            }
        }
        return ans;
    }
};©leetcode


