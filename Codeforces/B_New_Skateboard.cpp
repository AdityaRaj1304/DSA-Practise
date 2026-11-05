#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  ll ans = 0;
  for(int i =0;i<s.size();i++){
    int digit = s[i]-'0';
    if(digit%4==0){
      ans++;
    }
    if(i>0){
      int num = (s[i-1]-'0')*10+digit;
      if(num%4==0){
        ans+=i;
      }
    }
  }
  cout << ans ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t =1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}