#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int>ans(2,0);
        for(string s :events){
            if(ans[1]==10){
                return ans;
            }
            if(s=="1"||s=="2"||s=="3"||s=="4"||s=="5"||s=="6"){
                ans[0]+=s[0]-'0';
            }else if(s=="W"){
                ans[1]++;
            }else if(s=="WD"){
                ans[0]++;
            }else{
                ans[0]++;
            }
        }
        return ans;
    }
};