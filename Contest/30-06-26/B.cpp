#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    int digits =0;
    while(x){
        x/=10;
        digits++;
    }
    cout << (long long)(pow(10, digits) + 1) << "\n";
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