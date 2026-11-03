#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s ;
    cin >> s;
    if(s.length()<=10){
        cout << s << endl;
    }else{
        string ans = string(1,s[0]) + to_string(s.length()-2) + s.back();
        cout << ans << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}