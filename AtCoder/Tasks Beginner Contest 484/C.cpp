#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n ;
    cin >> n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin >>a[i];
    for(int i=0;i<n;i++)cin >>b[i];
    int l = -1,r=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(l==-1){
                l=i;
            }
            r=i;
        }
    }
    if(l==-1){
        cout << "Yes\n";
        return;
    }
    if(l==r){
        cout << "No\n";
        return;
    }
    bool left = a[l]==b[r];
    for(int i=l;i<r&&left;i++){
        if(a[i+1]!=b[i]){
            left=false;
        }
    }
    bool right = a[r]==b[l];
    for(int i=l;i<r&&right;i++){
        if(a[i]!=b[i+1]){
            right=false;
        }
    }
    if(left||right){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}