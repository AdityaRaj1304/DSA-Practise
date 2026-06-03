#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans = 0;
        int i = 0 ,j=0;
        string s = to_string(num);
        while(j<s.size()){
            if(j-i+1<k){
                j++;
            }else{
                string temp = s.substr(i,k);
                int val = stoi(temp);
                if(val && num%val==0){
                    ans++;
                }
                i++,j++;
            }
        }
        return ans;
    }
};