#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n ;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    char curr = 'R';
    for(char ch:s){
        if(ch=='R'){
            if(curr=='B'){
                ans++;
            }
            curr='B';
        }else{
            if(curr=='R'){
                ans++;
            }
            curr='R';
        }
    }
    cout << ans << endl;
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