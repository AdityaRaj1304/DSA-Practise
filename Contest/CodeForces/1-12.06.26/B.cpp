#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int i = 0;i<k;i++){
        int count = 0;
        for(int j = i;j<n;j+=k){
            if(s[j]=='1'){
                count++;
            }
        }
        if(count%2!=0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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