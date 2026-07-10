#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;

    if (x == 1) {
        cout << abs(a - b) << '\n';
        return;
    }

    vector<long long> arr1, arr2;

    long long num1 = a;
    while (true) {
        arr1.push_back(num1);
        if (num1 == 0) break;
        num1 /= x;
    }

    long long num2 = b;
    while (true) {
        arr2.push_back(num2);
        if (num2 == 0) break;
        num2 /= x;
    }

    long long ans = LLONG_MAX;

    for (int i = 0; i < (int)arr1.size(); i++) {
        for (int j = 0; j < (int)arr2.size(); j++) {
            long long cost = abs(arr1[i] - arr2[j]) + i + j;
            ans = min(ans, cost);
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}