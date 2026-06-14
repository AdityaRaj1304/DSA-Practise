#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int count = arr[0]-1;
        if(count>=k){
            return k;
        }
        for(int i = 1;i<n;i++){
            count+=((arr[i]-arr[i-1])-1);
            if(count>=k){
                return arr[i]-((count-k)+1);
            }
        }
        return arr[n-1]+(k-count);
    }
};