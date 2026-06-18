#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> ans;
        vector<string> morse = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                                "--.",  "....", "..",   ".---", "-.-",  ".-..",
                                "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                                "...",  "-",    "..-",  "...-", ".--",  "-..-",
                                "-.--", "--.."};
        for (string s : words) {
            string temp = "";
            for (char ch : s) {
                temp += morse[ch - 'a'];
            }
            ans.insert(temp);
        }
        return ans.size();
    }
};

