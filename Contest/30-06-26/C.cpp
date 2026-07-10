#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ;
    cin >> n;
    string s ;
    cin >> s;
    int ans  = 0;
    bool p1 = false , p2 = false;
    for(int i =1;i<n;i++){
        if(s[i]=='0' && s[i-1]=='1'){
            p1=true;
        }
        if(s[i]=='1' && s[i-1]=='0'){
            p2=true;
        }
    }
    if(p1&&p2){
        ans = 1;
    }else if(p1 || p2){
        ans = 2;
    }else{
        ans =1;
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