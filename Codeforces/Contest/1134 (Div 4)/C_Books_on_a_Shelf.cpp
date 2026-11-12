#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin >>arr[i];
    }
    vector<bool>vis(n,false);
    sort(arr.begin(),arr.end());
    vector<int>left,middle,right;
    int prev = 0;
    int ans =0;
    for(int i=0;i<n;i++){
        if(arr[i]>prev){
            ans++;
            left.push_back(arr[i]);
            prev=arr[i];
            vis[i]=true;
        }
    }
    prev=0;
    for(int i=n-1;i>=0;i--){
        if(!vis[i]){
            if(arr[i]!=prev){
                ans++;
                right.push_back(arr[i]);
                prev=arr[i];
            }else{
                middle.push_back(arr[i]);
            }
        }
    }
    cout << ans << endl;
    for(int num:left){
        cout << num << " ";
    }
    for(int num:middle){
        cout << num << " ";
    }
    for(int num:right){
        cout << num << " ";
    }
    cout<< endl;
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