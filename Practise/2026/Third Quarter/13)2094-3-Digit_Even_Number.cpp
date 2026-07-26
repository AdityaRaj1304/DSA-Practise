#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        vector<int> ans;
        for (int digit : digits) {
            freq[digit]++;
        }
        for (int i = 100; i < 1000; i += 2) {
            vector<int> temp(10, 0);
            temp[i % 10]++;
            temp[(i / 10) % 10]++;
            temp[i / 100]++;
            bool even = true;
            for (int j = 0; j < 10; j++) {
                if (temp[j] > freq[j]) {
                    even = false;
                    break;
                }
            }
            if (even) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

