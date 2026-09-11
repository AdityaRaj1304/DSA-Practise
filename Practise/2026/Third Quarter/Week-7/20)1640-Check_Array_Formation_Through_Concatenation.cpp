#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int n = arr.size();
        for(auto& v:pieces){
            int j = 0;
            while(j<n && arr[j]!=v[0]){
                j++;
            }
            for(int i =0;i<v.size();i++){
                if(j+i>=n||arr[j+i]!=v[i]){
                    return false;
                }
            }
        }
        return true;
    }
};