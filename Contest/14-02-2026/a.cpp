#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>freq(101,0);
        vector<int>ans;
        for(int i :bulbs){
            freq[i]++;
        }
        for(int i=0;i<101;i++){
            if(i%2!=0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};