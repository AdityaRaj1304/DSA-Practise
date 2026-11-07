#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n%3!=0){
        cout << "First\n";
    }else{
        cout << "Second\n";
    }
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