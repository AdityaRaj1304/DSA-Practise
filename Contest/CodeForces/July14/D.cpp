#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    vector<long long>arr(n+1,0);
    vector<long long>prefix(n+1,0);
    for(int i =1;i<=n;i++){
        cin>>arr[i];
    }
    long long sum = 0;
    for(int i = 1;i<=n;i++){
        sum+=arr[i];
        prefix[i]=sum;
    }
    vector<long long>prod(m);
    for(int i =0;i<m;i++){
        cin>>prod[i];
    }
    sort(prod.begin(),prod.end());
    long long ans = 0;
    int idx =0;
    for(int i =0;i<m;i++){
        long long segment = prefix[prod[i]]-prefix[idx];
        ans+=abs(segment);
        idx=prod[i];
    }
    ans+=prefix[n]-prefix[idx];
    cout << ans << "\n";
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
};