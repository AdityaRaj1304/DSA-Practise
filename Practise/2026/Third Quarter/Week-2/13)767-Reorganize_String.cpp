#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        int freq[26]={0};
        for(char ch:s){
            freq[ch-'a']++;
        }
        priority_queue<pair<int,char>>pq;
        for(int i =0;i<26;i++){
            if(freq[i]>0){
                pq.emplace(freq[i],'a'+i);
            }
        }
        string ans ="";
        pair<int,char>prev ={0,'.'};
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            ans+=it.second;
            it.first--;
            if(prev.first>0){
                pq.push(prev);
            }
            prev=it;
        }
        if(ans.size()!=s.size()){
            return "";
        }
        return ans;
    }
};



