#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool valid(string& s) {
        int n = s.size();
        int hyphen = 0;
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (isdigit(ch)) {
                return false;
            }
            if (ch == '-') {
                hyphen++;
                if (hyphen > 1) {
                    return false;
                }
                if (i == 0 || i == n - 1) {
                    return false;
                }
                if (!islower(s[i - 1]) || !islower(s[i + 1])) {
                    return false;
                }
            } else if (ch == '!' || ch == '.' || ch == ',') {
                if (i != n - 1) {
                    return false;
                }
            }
        }
        return true;
    }
    int countValidWords(string sentence) {
        int n = sentence.size();
        int ans = 0;
        string word = "";
        for (int i = 0; i <= n; i++) {
            if (i==n || sentence[i] == ' ') {
                if (!word.empty()) {
                    if (valid(word)) {
                        ans++;
                    }
                    word = "";
                }
            } else {
                word += sentence[i];
            }
        }
        return ans;
    }
};

