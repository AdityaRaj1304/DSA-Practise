#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int ans =0;
        int count =1;
        for(int i = 1 ;i<s.size();i++){
            ans=max(count,ans);
            if(s[i]==s[i-1]){
                count++;
            }else{
                count=1;
            }
        }
        ans=max(count,ans);
        return ans;
    }
};