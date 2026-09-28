#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ;
    cin >> n;
    vector<int>arr;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int size = *max_element(arr.begin(),arr.end());
    vector<int>freq(size+1,0);
    for(int num:arr){
        freq[num]++;
    }
    int ans = 0;
    for(int i=1;i<size;i++){
        if(freq[i]%2==0){
            ans+=freq[i]/2;
        }else{
            ans+=freq[i]/2;
            if(freq[i+1]%2!=0){
                ans++;
                freq[i+1]--;
            }
        }
    }
    ans+=freq[size]/2;
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