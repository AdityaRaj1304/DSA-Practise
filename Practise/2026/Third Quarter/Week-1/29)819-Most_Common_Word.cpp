#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n = paragraph.size();
        unordered_set<string> s(banned.begin(), banned.end());
        unordered_map<string, int> freq;
        string word = "";
        for (char ch : paragraph) {
            if (isalpha(ch)) {
                word += tolower(ch);
            } else {
                if (!word.empty()) {
                    if (s.find(word) == s.end())
                        freq[word]++;
                    word.clear();
                }
            }
        }
        if (!word.empty() && s.find(word) == s.end()) {
            freq[word]++;
        }
        int count = 0;
        string ans = "";
        for (auto& it : freq) {
            if (it.second > count) {
                ans = it.first;
                count = it.second;
            }
        }
        return ans;
    }
};




