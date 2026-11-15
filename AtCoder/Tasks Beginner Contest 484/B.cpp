#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;
    vector<int>arr(k);
    for(int i=0;i<k;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    if(arr.back()!=9){
        cout << -1;
    }else{
        cout << arr[0];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}