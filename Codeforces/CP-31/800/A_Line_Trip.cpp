#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , x;
    cin >> n >>x;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int ans =arr[0];
    for(int i =1;i<n;i++){
        ans=max(ans,arr[i]-arr[i-1]);
    }
    ans=max(ans,2*(x-arr.back()));
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