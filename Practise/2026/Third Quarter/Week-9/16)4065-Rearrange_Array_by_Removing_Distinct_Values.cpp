#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(101,0);
        unordered_set<int>s;
        for(int num:nums){
            freq[num]++;
            s.insert(num);
        }
        vector<int>ans;
        while(ans.size()!=n){
            int count =0;
            int curr = s.size();
            for(int i=0;i<101 &&count<curr;i++){
                if(freq[i]>0){
                    ans.push_back(i);
                    freq[i]--;
                    count++;
                    if(freq[i]==0){
                        s.erase(i);
                    }
                }
            }
        }
        return ans;
    }
};