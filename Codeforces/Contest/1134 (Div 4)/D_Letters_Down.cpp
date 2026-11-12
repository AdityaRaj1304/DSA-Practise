#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n ;
    cin >> n;
    string s;
    cin >> s;
    int ans =0;
    vector<int>change(26,false);
    for(int i=0;i<n/2;i++){
        int l = s[i]-'a';
        int r = s[n-i-1]-'a';
        if(l>r){
            swap(l,r);
        }
        for(int j=l;j<r;j++){
            change[j]=true;
        }
    }
    for(int i=0;i<26;i++){
        if(change[i]){
            ans++;
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