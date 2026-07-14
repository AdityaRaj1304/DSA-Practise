#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum =0;
    bool ans = true;
    for(long long i = 1;i<=n;i++){
        sum+=a[i-1];
        long long required = (i*(i+1))/2;
        if(sum<required){
            ans = false;
            break;
        }
    }
    if(ans){
        cout << "YES\n";
    }else{
        cout << "NO\n";
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