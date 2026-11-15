#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n ;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin >>arr[i];
    vector<int>cnt(n,0);
    cnt[arr[0]]++;
    ll ans = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans+=i-cnt[arr[i]];
        }
        cnt[arr[i]]++;
    }
    cout << ans << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}