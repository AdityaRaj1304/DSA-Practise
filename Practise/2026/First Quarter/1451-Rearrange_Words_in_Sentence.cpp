#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string arrangeWords(string text) {
        vector<pair<int, pair<int,string>>> words;
        int length = 0, idx = 0;
        string s;

        for(char ch : text){
            ch = tolower(ch);
            if(ch == ' '){
                words.push_back({length, {idx++, s}});
                length = 0;
                s.clear();
            } 
            else {
                s.push_back(ch);
                length++;
            }
        }
        words.push_back({length, {idx++, s}});
        sort(words.begin(), words.end(), compare);
        string ans;
        for(int i = 0; i < words.size(); i++){
            ans += words[i].second.second;
            if(i != words.size() - 1) ans += " ";
        }
        ans[0] = toupper(ans[0]);
        return ans;
    }
    static bool compare(pair<int, pair<int,string>> &a, pair<int, pair<int,string>> &b){
        if(a.first == b.first){
            return a.second.first < b.second.first;
        }
        return a.first < b.first;
    }
};