#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
void solve() {
    ll a ,b ,m;
    cin >> a >> b >> m;
    ll ans =0;
    for(int i =a;i<=b;i++){
        if(i%m==0){
            a=i;
            break;
        }else{
            ans+=i%m;
        }
    }
    int sum = (m*(m-1))/2;
    int complete = (b-a)/m;
    ans+=complete*sum;
    int end = (b/m)*m;
    for(int i = end;i<=b;i++){
        ans+=i%m;
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