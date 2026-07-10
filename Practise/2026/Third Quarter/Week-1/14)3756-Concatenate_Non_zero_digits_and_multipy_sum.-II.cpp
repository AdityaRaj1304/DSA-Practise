#include <bits/stdc++.h>
using namespace std;




class Solution { //TLE
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const long long MOD = 1e9 + 7;
        int n = s.size();
        string temp = "";
        vector<int> len(n);
        vector<long long> prefix(n);
        int cnt = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                temp += s[i];
                cnt++;
                sum += (s[i] - '0');
            }
            len[i] = cnt;
            prefix[i] = sum;
        }
        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            int left = (l == 0) ? 0 : len[l - 1];
            int right = len[r];

            long long x = 0;

            for (int i = left; i < right; i++) {
                x = (x * 10 + (temp[i] - '0')) % MOD;
            }
            long long digitSum = prefix[r] - (l == 0 ? 0 : prefix[l - 1]);
            ans.push_back((x * digitSum) % MOD);
        }
        return ans;
    }
};