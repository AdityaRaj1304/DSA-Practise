#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long>a(n),b(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        cin >> b[i];
    }
    vector<long long>diff(n);
    for(int i =0;i<n;i++){
        diff[i]=b[i]-a[i];
    }
    for(int i =n-1;i>=1;i--){
        if(diff[i]<0){
            diff[i-1]+=diff[i];
            diff[i]=0;
        }
    }
    if(diff[0]<0){
        cout << "NO\n";
    }else{
        cout << "YES\n";
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