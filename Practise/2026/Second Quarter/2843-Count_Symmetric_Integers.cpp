#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low ;i<=high;i++){
            string s = to_string(i);
            int n = s.size();
            int st = 0 , end =n-1;
            int first = 0 , last = 0;
            if(n%2==0){
                while(st<end){
                    first+=s[st++]-'0';
                    end+=s[end--]-'0';
                }
                if(first==end){
                    ans++;
                }
            }
        }
        return ans;
    }
};