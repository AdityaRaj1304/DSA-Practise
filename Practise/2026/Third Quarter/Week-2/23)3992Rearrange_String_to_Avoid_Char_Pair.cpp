#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int freq[26]={0};
        for(char ch:s){
            freq[ch-'a']++;
        }
        string ans(freq[y-'a'],y);
        for(int i =0;i<26;i++){
            if(i!=y-'a'&&freq[i]>0){
                ans.append(freq[i],i+'a');
            }
        }
        return ans;
    }
};