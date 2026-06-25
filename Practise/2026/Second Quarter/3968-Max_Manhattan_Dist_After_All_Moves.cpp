#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(string moves) {
        int ans = 0;
        int x = 0 , y =0;
        int extra = 0;
        for(char ch:moves){
            if(ch=='U'){
                y++;
            }else if(ch=='D'){
                y--;
            }else if(ch=='R'){
                x++;
            }else if(ch=='L'){
                x--;
            }else{
                extra++;
            }
        }
        return abs(x)+abs(y)+extra;
    }
};


class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        long long ans = 0;
        char ch = x + '0';
        for (int st = 0; st < nums.size(); st++) {
            long long sum = 0;
            for (int end = st; end < nums.size(); end++) {
                sum += nums[end];
                string s = to_string(sum);
                if (s[0] == ch && s[s.size() - 1] == ch) {
                    ans++;
                }
            }
        }
        return ans;
    }
};


