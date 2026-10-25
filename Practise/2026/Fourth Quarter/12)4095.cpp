#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> rank;
        for (int i = 0; i < n; i++) {
            unordered_map<int, int> freq;
            vector<int> arr;
            for (int j = i; j < n; j++) {
                int num = nums[j];
                if (freq[num] == 0) {
                    arr.push_back(num);
                    rank[num] = arr.size();
                    int l = arr.size();
                    if (1LL * l * (l + 1) / 2 > n - i) {
                        break;
                    }
                }
                freq[num]++;
                if (freq[num] > rank[num]) {
                    break;
                }
                int l = arr.size();
                if (j - i + 1 == l * (l + 1) / 2) {
                    ans++;
                }
            }
            for (int x : arr) {
                freq[x] = 0;
                rank[x] = 0;
            }
            arr.clear();
        }
        return ans;
    }
};
