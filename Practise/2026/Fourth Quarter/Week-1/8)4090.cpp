#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int countMagicalPairs(string s) {
        int n = s.size();
        long long ans = 0;
        for (int i = 0; i < n - 1; i++) {
            vector<int>count(27,0);
            vector<bool>leftExist(26,false);
            vector<bool>rightExist(26,false);
            int left =0,right=0;
            for(int j=i;j>=0;j--){
                int ch = s[j]-'a';
                if(!leftExist[ch]){
                    leftExist[ch]=true;
                    left++;
                }
                count[left]++;
            }
            for(int k=i+1;k<n;k++){
                int ch = s[k]-'a';
                if(!rightExist[ch]){
                    rightExist[ch]=true;
                    right++;
                }
                ans+=count[right];
            }
        }
        return ans;
    }
};


