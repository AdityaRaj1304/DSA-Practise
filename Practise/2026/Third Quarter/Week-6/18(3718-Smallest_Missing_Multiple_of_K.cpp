#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>freq(101,0);
        for(int num:nums){
            freq[num]++;
        }
        for(int i =k;i<=100;i+=k){
            if(freq[i]==0){
                return i;
            }
        }
        int ans = k;
        while(ans<=100){
            ans+=k;
        }
        return ans;
    }
};


class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(int num:nums){
            s.insert(num/k);
        }
        for(int i=1;i<=100;i++){
            if(s.find(i*k)==s.end){
                return i*k;
            }
        }
        return 0;
    }
};