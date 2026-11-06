#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool filled = false;
    int cnt =0;
    int ans =0;
    for(char ch:s){
        if(ch=='#'){
            if(cnt){
                ans+=cnt;
                cnt=0;
            }
        }else{
            cnt++;
            if(cnt>2){
                filled=true;
                break;
            }
        }
    }
    if(cnt>2){
        filled=true;
    }else{
        ans+=cnt;
    }
    if(filled){
        ans=2;
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