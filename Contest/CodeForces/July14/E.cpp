#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ,q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<int>prefix(n,0);
    for(int i =1;i<n;i++){
        int pair = 0;
        if(s[i]==s[i-1]){
            pair=1;
        }
        prefix[i]=prefix[i-1]+pair;
    }
    while(q--){
        int l,r,k;
        cin >> l>>r>>k;
        l--,r--;
        int bad = prefix[r]-prefix[l];
        if(bad<=2*k){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
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