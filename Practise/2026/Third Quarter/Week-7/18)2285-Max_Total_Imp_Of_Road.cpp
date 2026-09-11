#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        ll sum = 0 , ans  =0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>0){
                ans++;
            }else{
                break;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int first = 101 , second = 101;
        for(int p:prices){
            if(p<first){
                second=first;
                first=p;
                
            }else if(p<second){
                second =p;
            }
        }
        return first+second<=money ? money-(first+second):money;
    }
};