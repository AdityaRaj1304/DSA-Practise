#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll>arr(n+1);
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    vector<ll>ans(n+1,0);
    vector<bool>used(n+1,false);
    bool valid = true;
    for(int i=1;i<=n;i++){
        ll x = arr[i]-i+n+1;
        if(x<1||x>n||used[x]){
            valid =false;
            break;
        }
        used[x]=true;
        ans[x]=i;
    }
    if(!valid){
        cout << -1 ;
    }else{
        for(int i=1;i<=n;i++){
            cout << ans[i] << " ";
        }
    }
    cout << endl;
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