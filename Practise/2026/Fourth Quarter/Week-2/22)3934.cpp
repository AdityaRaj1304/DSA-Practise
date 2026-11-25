#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<vector<int>, vector<int>> build_sa_lcp(const vector<int>& nums) {
    int n = static_cast<int>(nums.size());
    if (n == 0) return {{}, {}};
    if (n == 1) return {{0}, {}};

    // 1. Coordinate-compress nums into [1..m] and append sentinel 0
    vector<int> vals = nums;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());

    int N = n + 1;
    vector<int> s(N, 0);
    for (int i = 0; i < n; ++i) {
        s[i] = static_cast<int>(lower_bound(vals.begin(), vals.end(), nums[i]) - vals.begin()) + 1;
    }

    // 2. Build Suffix Array via O(n log n) prefix doubling
    int classes = static_cast<int>(vals.size()) + 1;
    vector<int> p(N), c(N), cnt(max(N, classes), 0);

    for (int x : s) cnt[x]++;
    for (int i = 1; i < classes; ++i) cnt[i] += cnt[i - 1];
    for (int i = N - 1; i >= 0; --i) p[--cnt[s[i]]] = i;

    c[p[0]] = 0;
    classes = 1;
    for (int i = 1; i < N; ++i) {
        if (s[p[i]] != s[p[i - 1]]) classes++;
        c[p[i]] = classes - 1;
    }

    vector<int> pn(N), cn(N);
    for (int h = 1; h < N && classes < N; h <<= 1) {
        for (int i = 0; i < N; ++i) {
            pn[i] = p[i] - h;
            if (pn[i] < 0) pn[i] += N;
        }

        fill(cnt.begin(), cnt.begin() + classes, 0);
        for (int i = 0; i < N; ++i) cnt[c[pn[i]]]++;
        for (int i = 1; i < classes; ++i) cnt[i] += cnt[i - 1];
        for (int i = N - 1; i >= 0; --i) p[--cnt[c[pn[i]]]] = pn[i];

        cn[p[0]] = 0;
        classes = 1;
        for (int i = 1; i < N; ++i) {
            int cur_next = p[i] + h;
            if (cur_next >= N) cur_next -= N;
            int prev_next = p[i - 1] + h;
            if (prev_next >= N) prev_next -= N;

            if (c[p[i]] != c[p[i - 1]] || c[cur_next] != c[prev_next]) {
                classes++;
            }
            cn[p[i]] = classes - 1;
        }
        c.swap(cn);
    }

    // Drop the sentinel suffix (always at p[0])
    vector<int> sa(p.begin() + 1, p.end());

    // 3. Build LCP Array via O(n) Kasai's algorithm
    vector<int> rnk(n);
    for (int i = 0; i < n; ++i) rnk[sa[i]] = i;

    vector<int> lcp(n - 1, 0);
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (rnk[i] == n - 1) {
            k = 0;
            continue;
        }
        int j = sa[rnk[i] + 1];
        while (i + k < n && j + k < n && nums[i + k] == nums[j + k]) {
            ++k;
        }
        lcp[rnk[i]] = k;
        if (k > 0) --k;
    }
    return {sa, lcp};
}


class Solution {
public:
    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0){
            return 0;
        }
        auto [sa, lcp] = build_sa_lcp(nums);
        int ans = n;
        for (int i = 0; i < n; ++i) {
            int left = (i > 0) ? lcp[i - 1] : 0;
            int right = (i < n - 1) ? lcp[i] : 0;
            int need = max(left, right) + 1;
            if (sa[i] + need <= n) {
                ans = min(ans, need);
            }
        }
        return ans;
    }
};
