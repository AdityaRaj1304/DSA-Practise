#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans =0;
        int n = word.size();
        for(string s:patterns){
            int m = s.size();
            int i = 0,j=0;
            bool valid = false;
            while(i<n && j<m){
                if(word[i]==s[j] && j==0){
                    j++;
                    valid = true;
                }else if(word[i]==s[j]){
                    j++;
                }else{
                    j=0;
                    valid = false;
                }
            }
            if(j==m && valid){
                ans++;
            }
        }
        return ans;
    }
};


class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans =0;
        int n = word.size();
        for(string s:patterns){
            if(word.find(s) != string::npos){
                ans++;
            }
        }
        return ans;
    }
};