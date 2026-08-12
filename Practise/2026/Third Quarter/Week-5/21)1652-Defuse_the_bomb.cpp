#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans;
        if(k==0){
            ans.assign(n,0);
        }else if(k>0){
            for(int i =0;i<n;i++){
                int sum =0;
                for(int j =1;j<=k;j++){
                    sum+=code[(i+j)%n];
                }
                ans.push_back(sum);
            }
        }else{
            for(int i =0;i<n;i++){
                int sum =0;
                for(int j =1;j<=abs(k);j++){
                    sum+=code[(i-j+n)%n];
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};


