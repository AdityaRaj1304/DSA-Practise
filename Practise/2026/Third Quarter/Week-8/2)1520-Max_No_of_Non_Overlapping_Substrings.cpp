#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.size();
        vector<int>first(26,-1);
        vector<int>last(26,-1);
        for(int i =0;i<n;i++){
            int ch = s[i]-'a';
            if(first[ch]==-1){
                first[ch]=i;
            }
            last[ch]=i;
        }
        vector<pair<int,int>>intervals;
        for(int i =0;i<26;i++){
            int st = first[i];
            int end = last[i];
            bool valid = true;
            for(int i =st+1;i<end;i++){
                int ch = s[i]-'a';
                if(first[ch]<st){
                    valid=false;
                    break;
                }
            }
            if(valid){
                intervals.push_back({st,end});
            }
        }
        sort(intervals.begin(),intervals.end(),[](auto&a,auto&b){
            if(a.second==b.second){
                return a.second-a.first<b.second-b.first;
            }
            return a.second<b.second;
        });
        vector<string>ans;
        int prev = -1;
        for(auto&interval:intervals){
            int st = interval[0];
            int end = interval[1];
            if(st>prev){
                ans.push_back(s.substr(st,end-st+1));
                prev=end;
            }
        }
        return ans;
    }
};