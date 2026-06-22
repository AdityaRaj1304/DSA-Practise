#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool helper(long long sum,int x){
        int last = sum%10;
        if(last!=x){
            return false;
        }
        long long first = sum;
        while(first>9){
            first/=10;
        }
        return first == x;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        long long ans = 0;
        for (int st = 0; st < nums.size(); st++) {
            long long sum = 0;
            for (int end = st; end < nums.size(); end++) {
                sum += nums[end];
                if(helper(sum,x)){
                    ans++;
                }
            }
        }
        return ans;
    }
};


// class Solution { // TLE
// public:
//     int countValidSubarrays(vector<int>& nums, int x) {
//         long long ans = 0;
//         char ch = x + '0';
//         for (int st = 0; st < nums.size(); st++) {
//             long long sum = 0;
//             for (int end = st; end < nums.size(); end++) {
//                 sum += nums[end];
//                 string s = to_string(sum);
//                 if (s[0] == ch && s[s.size() - 1] == ch) {
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };




class Solution {
public:
    int maxTotalValue(vector<int>& value, vector<int>& decay, int m) {
        vector<pair<int,int>>arr;
        for(int i =0;i<value.size();i++){
            arr.push_back({value[i],decay[i]});
        }
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i=0;i<m;i++){
            ans += arr[0].first;
            arr[0].first-=arr[0].second;
            arr.push_back({value[i],decay[i]});
        }
        return ans;
    }
};