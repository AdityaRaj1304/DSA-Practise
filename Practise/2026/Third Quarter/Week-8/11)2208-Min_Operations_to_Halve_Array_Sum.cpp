#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution { //Better Initialization
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq(nums.begin(), nums.end());
        int ans = 0;
        double total = accumulate(nums.begin(), nums.end(), 0.0);
        total/=2;
        while(total>0){
            double maxm = pq.top();
            pq.pop();
            total-=(maxm/2);
            maxm/=2;
            pq.push(maxm);
            ans++;
        }
        return ans;
    }
};

class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        int ans = 0;
        double total = 0;
        for(int num:nums){
            total+=(double)num;
            pq.push((double)num);
        }
        total/=2;
        while(pq.size()){
            if(total<=0){
                return ans;
            }
            double maxm = pq.top();
            pq.pop();
            total-=(maxm/2);
            maxm/=2;
            pq.push(maxm);
            ans++;
        }
        return ans;
    }
};

