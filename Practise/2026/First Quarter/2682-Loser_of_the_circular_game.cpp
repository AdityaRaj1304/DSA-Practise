#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>ans;
        int round =1,person =0;
        vector<int>count(n,0);
        while(count[person]==0){
            count[person]++;
            person = (person+(k*round))%n;
            round++;
        }
        for(int i = 0 ;i<n;i++){
            if(count[i]==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};