#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0;
        int capture = 0 , empty = 0;
        for(int i = 0;i<forts.size();i++){
            ans = max(ans , abs(capture-empty);
            if(forts[i] == 1){
                capture=i;
            }else if(forts[i]==-1){
                empty=i;
            }
        }
        return ans;
    }
};