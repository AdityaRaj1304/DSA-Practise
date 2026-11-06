#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    bool sorted = true;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sorted=false;
        }
    }
    if(!sorted && k==1){
        cout << "NO\n";
    }else{
        cout << "YES\n";;
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