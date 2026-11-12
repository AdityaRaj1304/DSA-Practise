#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    int a = INT_MAX ,b=INT_MAX;
    int ans =0;
    for(int num:arr){
        if(num<=a){
            a=num;
        }else if(num<=b){
            b=num;
        }else{
            ans++;
            a=num;
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