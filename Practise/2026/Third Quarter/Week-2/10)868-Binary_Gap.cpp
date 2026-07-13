#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        int ans =0;
        int dist =0;
        bool valid = false;
        while(n){
            int rem = n%2;
            n/=2;
            if(rem==0){
                dist++;
            }else{
                dist++;
                if(valid){
                    ans=max(ans,dist);
                }
                dist=0;
                valid = true;
            }
        }
        return ans;
    }
};
