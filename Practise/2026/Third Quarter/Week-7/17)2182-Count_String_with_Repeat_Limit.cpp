#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        string ans  ="";
        for(int i =25;i>=0;i--){
            if(!freq[i]){
                continue;
            }
            while(freq[i]!=0){
                if(freq[i]<=repeatLimit){
                    ans+=string(freq[i],i+'a');
                    freq[i]=0;
                }else{
                    ans+=string(repeatLimit,i+'a');
                    freq[i]-=repeatLimit;
                    int j = i-1;
                    while(j>=0 && freq[j]==0){
                        j--;
                    }
                    if(j<0){
                        break;
                    }
                    ans+=(char)(j+'a');
                    freq[j]--;
                }
            }
        }
        return ans;
    }
};