#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        int i = 0;
        vector<int> count = freq;
        while (i < n) {
            if (count[target[i] - 'a'] == 0) {
                break;
            } else {
                count[target[i] - 'a']--;
                i++;
            }
        }
        if(i==n){
            i--;
            count[target[i]-'a']++;
        }
        string ans = "";
        bool valid = false;
        while (i >= 0) {
            int idx = target[i] - 'a' + 1;
            while (idx < 26) {
                if (count[idx] > 0) {
                    ans = target.substr(0, i) + char(idx + 'a');
                    count[idx]--;
                    valid = true;
                    break;
                }
                idx++;
            }
            if (valid) {
                break;
            }
            i--;
            if (i >= 0) {
                count[target[i] - 'a']++;
            }
        }
        if (valid) {
            for (int i = 0; i < 26; i++) {
                if (count[i]) {
                    ans += string(count[i], 'a' + i);
                }
            }
            return ans;
        }
        return "";
    }
};