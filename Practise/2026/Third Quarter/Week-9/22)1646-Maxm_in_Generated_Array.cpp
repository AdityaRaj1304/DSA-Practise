#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<2){
            return n;
        }
        vector<int>arr(n+1,0);
        arr[1]=1;
        int ans =0;
        for(int i =1;i<=n/2;i++){
            int idx = 2*i;
            arr[idx]=arr[i];
            ans=max(ans,arr[idx]);
            if(idx+1<=n){
                arr[idx+1]=arr[i]+arr[i+1];
                ans=max(ans,arr[idx+1]);
            }
        }
        return ans;
    }
};


