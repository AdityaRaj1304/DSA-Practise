#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,k;
    cin >> n>>k;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin >> arr[i];
    int odd =0;
    for(int i=0;i<n;i+=(k+1)){
        if(arr[i]&1){
            odd++;
        }
    }
    if(odd&1){
        cout << "Alice\n";
    }else{
        cout << "Bob\n";
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