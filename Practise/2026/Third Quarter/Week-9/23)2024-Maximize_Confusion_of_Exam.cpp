#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans = 0;
        int t = 0, f = 0;
        for (int l = 0, r = 0; r < answerKey.size(); r++) {
            if (answerKey[r] == 'T'){
                t++;
            } 
            else {
                f++;
            }
            while (min(t, f) > k) {
                if (answerKey[l] == 'T'){
                    t--;
                } 
                else {
                    f--;
                }
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};


