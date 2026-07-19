#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool isThree(int n) {
        int ans =0;
        for(int i =1;i*i<=n;i++){
            if(n%i==0){
                if(n/i!=i){
                    ans+=2;
                }else{
                    ans+=1;
                }
                if(ans>3){
                    return false;
                }
            }

        }
        return ans==3?true:false;
    }
};
