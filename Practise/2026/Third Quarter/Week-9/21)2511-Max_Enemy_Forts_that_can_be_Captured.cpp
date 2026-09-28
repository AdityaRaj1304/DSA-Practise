#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution { //O(n^2)
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int ans =0;
        int capture=0;
        for(int i =0;i<n-1;i++){
            if(forts[i]==0){
                continue;
            }
            for(int j =i+1;j<n;j++){
                if(forts[j]==0){
                    capture++;
                }else {
                    if(forts[j]==-forts[i]){
                    ans=max(ans,capture);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int ans =0;
        int prev =-1;
        for(int i =0;i<n;i++){
            if(forts[i]!=0){
                if(prev!=-1 && forts[prev]==-forts[i]){
                    ans=max(ans,i-prev-1);
                }
                prev=i;
            }
        }
        return ans;
    }
};