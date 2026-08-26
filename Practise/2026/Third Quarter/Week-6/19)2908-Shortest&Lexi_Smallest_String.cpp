#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "{";
        int l = 0;
        int count = 0;
        int size = INT_MAX;
        for (int r = 0; r < n; r++) {
            if (s[r] == '1') {
                count++;
            }
            while (count > k) {
                if (s[l] == '1') {
                    count--;
                }
                l++;
            }
            if (count == k) {
                while (s[l] == '0') {
                    l++;
                }
                if (r - l + 1 < size) {
                    size = r - l + 1;
                    ans = s.substr(l, r - l + 1);
                } else if (r - l + 1 == size) {
                    string curr = s.substr(l, r - l + 1);
                    if (curr < ans) {
                        ans = curr;
                    }
                }
            }
        }
        return ans == "{" ? "" : ans;
    }
};