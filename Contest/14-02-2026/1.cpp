#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans ;
        for(string s :words){
            int sum = 0;
            for(char ch: s){
                sum+=weights[ch-'a'];
            }
            sum=sum%26;
            ans +=('a'+(25-sum));
        }
        return ans;
    }
};