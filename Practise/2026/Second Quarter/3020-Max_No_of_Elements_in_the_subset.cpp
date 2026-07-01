#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num:nums){
            m[num]++;
        }
        int ans = m[1]%2!=0?m[1]:m[1]-1;
        
        for(auto&it:m){
            int num = it.first;
            if(num == 1){
                continue;
            }
            long long temp = num;
            int len = 0;
            while(m.count(temp) && m[temp]>1){
                len+=2;
                temp*=temp;
                if(temp>1e9){
                    break;
                }
            }
            if(m.count(temp)){
                len++;
            }else{
                len--;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};




