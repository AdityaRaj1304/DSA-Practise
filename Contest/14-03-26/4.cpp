#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countFancy(long long l, long long r) {
        long long ans =0;
        for(long long i = l ;i<=r;i++){
            if(is_fancy(i));
        }
        return ans;
    }
    bool good(long long num){
        string s = to_string(num);
        bool increasing = true , decreasing =true;
        for(int i = 1 ;i <s.size();i++){
            if(s[i]>=s[i-1]){
                decreasing=false;
            }
            if(s[i]<=s[i-1]){
                increasing=false;
            }
        }
        return increasing || decreasing;
    }
    bool is_fancy(long long num){
        if(good(num)){
            return true;
        }
        int sum = 0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        return good(sum);
    }
};