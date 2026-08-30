#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        //sort(freq.begin(),freq.end(),greater<int>());
        unordered_set<int>st;
        st.insert(freq[0]);
        int ans = 0;
        for(int i =1;i<26;i++){
            if(freq[i]==0){
                continue;
            }
            while(freq[i]>0 && st.find(freq[i])!=st.end()){
                cout << freq[i] << " ";
                freq[i]--;
                cout << freq[i] << " \n" ;
                ans++;
            }
            if(freq[i]>0){
                st.insert(freq[i]);
            }
        }
        return ans;
    }
};