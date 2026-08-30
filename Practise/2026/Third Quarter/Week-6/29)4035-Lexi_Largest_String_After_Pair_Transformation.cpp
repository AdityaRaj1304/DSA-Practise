#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string>ans;
        for(int num:nums){
            vector<int>div(26,0);
            div[0]=num;
            for(int i =0;i<25;i++){
                div[i+1]=div[i]/2;
                div[i]=div[i]%2;
            }
            string s = "";
            for(int i =25;i>=0;i--){
                while(div[i]--){
                    s+=(char)i+'a';
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};