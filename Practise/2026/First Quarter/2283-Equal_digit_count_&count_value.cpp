#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        vector<int>freq(10,0);
        for(char ch :num){
            freq[ch-'0']++;
        }
        for(int i = 0 ;i<num.size();i++){
            if(freq[i]!=num[i]-'0'){
                return false;
            }
        }
        return true;
    }
};