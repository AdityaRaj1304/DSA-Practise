#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int g = gcd(x,y);
    bool ans = true;
    for(int i = 0;i<n;i++){
        int curr = i+1;
        int target = arr[i];
        if(abs(curr-target)%g!=0){
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