#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int almostPalindromic(string s) {
        int ans = 0;
        int n = s.size();

        if (pal(s, 0, n - 1)) {
            return n;
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int st = i, end = j;
                bool check = false;

                while (st < end) {
                    if (s[st] != s[end]) {
                        if (pal(s, st + 1, end) ||
                            pal(s, st, end - 1)) {
                            check = true;
                        }
                        break;
                    }
                    st++;
                    end--;
                }

                if (!check && st >= end) {
                    if (pal(s, i + 1, j) ||
                        pal(s, i, j - 1)) {
                        check = true;
                    }
                }

                if (check) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }

    bool pal(string &s, int st, int end) {
        while (st < end) {
            if (s[st++] != s[end--]) {
                return false;
            }
        }
        return true;
    }
};
