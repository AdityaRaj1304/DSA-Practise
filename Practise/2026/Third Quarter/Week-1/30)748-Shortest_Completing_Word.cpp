#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int>letters;
        for(char ch:licensePlate){
            if(isalpha(ch)){
                letters[tolower(ch)]++;
            }
        }
        int size = letters.size();
        string ans ="";
        for(string s:words){
            unordered_map<char,int>curr=letters;
            int count =0;
            for(char ch:s){
                if(curr.find(ch)!=curr.end() && curr[ch]>0){
                    curr[ch]--;
                    if(curr[ch]==0){
                        count++;
                    }
                }
            }
            if(count==size){
                if(ans.empty() || ans.size()>s.size()){
                    ans=s;
                }
            }
        }
        return ans;
    }
};