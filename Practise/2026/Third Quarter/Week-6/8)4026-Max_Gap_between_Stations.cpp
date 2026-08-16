#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumGap(string skill, string station) {
        int m = skill.size();
        int n = station.size();
        if(m==1){
            return 0;
        }
        vector<int>first(m,0),last(n,0);
        int i =0,j=0;
        while(i<m&&j<n){
            if(skill[i]==station[j]){
                first[i]=j;
                i++;
            }
            j++;
        }
        i=m-1,j=n-1;
        while(i>=0&&j>=0){
            if(skill[i]==station[j]){
                last[i]=j;
                i--;
            }
            j--;
        }
        int ans =0;
        for(int i =1;i<m;i++){
            ans =max(ans,last[i]-first[i-1]);
        }
        return ans;
    }
};