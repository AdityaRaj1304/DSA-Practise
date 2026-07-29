#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int k = 0.05*n;
        sort(arr.begin(),arr.end());
        double total = 0;
        double size =0;
        for(int i =k;i<n-k;i++){
            total+=arr[i];
            size++;
        }
        return double(total/size);
    }
};

