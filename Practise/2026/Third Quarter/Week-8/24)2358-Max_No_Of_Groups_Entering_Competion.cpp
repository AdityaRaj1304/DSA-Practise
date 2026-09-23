#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int size = 1;
        int ans = 0;
        int i =0;
        while(i<n){
            if(n-(i+size)<0){
                return ans;
            }
            ans++;
            i+=size;
            size++;
        }
        return ans;
    }
};

class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,vector<int>>mp;
        for(int i =0;i<words.size();i++){
            string s= words[i];
            vector<int>arr;
            for(int i=1;i<s.size();i++){
                arr.push_back((s[i]-'a')-(s[i-1]-'a'));
            }
            mp[arr].push_back(i);
            if(mp[arr].size()==1&&i>1){
                return s;
            }
        }
        return "";
    }
};