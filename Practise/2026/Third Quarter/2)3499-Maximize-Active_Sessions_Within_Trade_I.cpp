#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int cnt1 = 0; 
        int n = s.length(); 
        for(int i = 0; i < n; i++) if(s[i] == '1'){
            cnt1++; 
        } 
        int prevZeros = -1, ans = 0; 
        int i = 0; 
        while(i < n) {
            int j = i; 
            while(j < n && s[j] == s[i]) j++; 
            int len = j - i; 

            if(s[i] == '0') {
                if(prevZeros != -1) ans = max(ans, prevZeros + len ); 
                prevZeros = len; 
            }
            i = j; 
        }
        return cnt1 + ans; 
    }
};


class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int ans =0;
        vector<int>pattern;
        int count =1;
        for(int i =0;i<n-1;i++){
            if(s[i]==s[i+1]){
                count++;
            }else{
                if(s[i]=='1'){
                    pattern.push_back(count);
                }else{
                    pattern.push_back(count*-1);
                }
                count=1;
            }
        }
        if(s[n-1]=='1'){
            pattern.push_back(count);
        }else{
            pattern.push_back(count*-1);
        }
        // for(int i=0;i<pattern.size();i++){
        //     cout << pattern[i] << " ";
        // }
        int size = pattern.size();
        if(size<3){
            return 1;
        }
        for(int i =0;i<size-2;i++){
            if(pattern[i]<0){
                int curr = abs(pattern[i])+pattern[i+1]+abs(pattern[i+2]);
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};