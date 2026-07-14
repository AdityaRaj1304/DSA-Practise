#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int maxm = 0 , curr =0;
    for(char ch:s){
        if(ch=='#'){
            curr++;
            maxm=max(maxm,curr);
        }else{
            curr =0;
        }
    }
    cout << (maxm+1)/2 << "\n";
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