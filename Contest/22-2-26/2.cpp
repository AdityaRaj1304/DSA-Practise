#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int temp = n , ans = 0;
        while(temp){
            int digit =temp%10;
            temp/=10;
            ans+=fac(digit);
        }
        string s1 = to_string(ans) , s2 =to_string(n);
        if(s1.size()!=s2.size()){
            return false;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1==s2;
    }
    int fac(int num){
        int ans = 1;
        for(int i = 1 ;i<=num;i++){
            ans*=i;
        }
        return ans;
    }
};