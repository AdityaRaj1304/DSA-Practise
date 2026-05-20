#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int freq[101]={0};
        for(int i :nums){
            freq[i]++;
        }
        int count = 0;
        for(int i = 0;i<101;i++){
            if(freq[i]==0){
                continue;
            }
            for(int j  = i+1;j<101;j++){
                if(freq[j]==0){
                    continue;
                }
                if(freq[i]!=freq[j]){
                    return{i,j};
                }
            }
        }
        return {-1,-1};
    }
};©leetcode