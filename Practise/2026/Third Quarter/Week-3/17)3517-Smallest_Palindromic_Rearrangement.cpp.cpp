#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        if (n == 1) {
            return s;
        }
        vector<int> freq(26, 0);
        string ans = "";
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        int idx = 0;
        for (int i = 0; i < 26; i++) {
            while (freq[i] >= 2) {
                s[idx] = 'a' + i;
                s[n - 1 - idx] = 'a' + i;
                freq[i] -= 2;
                idx++;
            }
        }
        if (n % 2) {
            for (int i = 0; i < 26; i++) {
                if (freq[i]) {
                    s[n / 2] = 'a' + i;
                }
            }
        }
        return s;
    }
};



