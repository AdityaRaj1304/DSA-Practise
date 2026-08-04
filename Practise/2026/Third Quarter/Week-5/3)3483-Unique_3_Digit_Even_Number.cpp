#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int ans =0;
        vector<int>freq(10,0);
        for(int d:digits){
            freq[d]++;
        }
        for(int i =100;i<999;i+=2){
            vector<int>temp(10,0);
            bool valid = true;
            while(i){
                int digit = i%10;
                if(++temp[digit]>freq[digit]){
                    valid =false;
                    break;
                }
            }
            if(valid){
                ans++;
            }
        }
        return ans;
    }
};