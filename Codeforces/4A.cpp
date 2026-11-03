#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int w;
    cin >> w;
    if(w%2==0 && w>3){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}