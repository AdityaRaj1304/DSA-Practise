#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n , m;
    cin >> n >> m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>zeroes;
    int totalDigits =0;
    for(int &num:arr){
        int cnt =0;
        while(num%10==0){
            cnt++;
            totalDigits++;
            num/=10;
        }
        zeroes.push_back(cnt);
        while(num){
            totalDigits++;
            num/=10;
        }
    }
    sort(zeroes.begin(),zeroes.end(),greater<int>());
    for(int i=0;i<n;i+=2){
        totalDigits-=zeroes[i];
    }
    if(totalDigits<=m){
        cout << "Anna\n";
    }else{
        cout << "Sasha\n";
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