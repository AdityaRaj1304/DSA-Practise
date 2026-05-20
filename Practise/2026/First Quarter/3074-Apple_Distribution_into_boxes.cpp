#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apples = 0 ;
        for(int i :apple){
            apples+=i;
        }
        sort(capacity.begin(),capacity.end());
        int n = capacity.size();
        int sum = 0;
        int ans = 0;
        for(int i =n-1;i>=0;i--){
            sum+=capacity[i];
            ans++;
            if(sum>=apples){
                return ans;
            }
        }
        return ans;
    }
};