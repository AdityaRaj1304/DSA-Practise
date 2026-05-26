#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPoints(string rings) {
        int n = rings.size();
        int ans = 0;
        vector<vector<bool>> v(10, vector<bool>(3, false));
        for(int i = 1;i<n;i+=2){
            int ring = rings[i]-'0';
            char color = rings[i-1];
            if(color=='R'){
                v[ring][0]=true;
            }else if(color=='G'){
                v[ring][1]=true;
            }else if(color == 'B'){
                v[ring][2]=true;
            }
        }
        for(int i = 0;i<10;i++){
            if(v[i][0]&&v[i][1]&&v[i][2]){
                ans++;
            }
        }
        return ans;
    }
};