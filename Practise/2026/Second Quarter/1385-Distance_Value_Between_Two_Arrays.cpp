#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size() , n = arr2.size();
        int count = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    count++;
                    break;
                }
            }
        }
        return m-count;
    }
};
