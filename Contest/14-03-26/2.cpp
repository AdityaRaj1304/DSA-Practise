#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maximum = INT_MIN;
        vector<int>g;
        for(int num :nums){
            maximum = max(maximum,num);
            int temp = gcd(num,maximum);
            g.push_back(temp);
        }
        sort(g.begin(),g.end());
        int i = 0 , j = g.size()-1;
        long long ans = 0;
        while(i<j){
            long long temp = gcd(g[i],g[j]);
            ans+=temp;
            i++ , j--;
        }
        return ans;
    }
};