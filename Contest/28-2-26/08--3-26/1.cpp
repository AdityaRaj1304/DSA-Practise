#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans = INT_MAX;
        int idx = -1;
        for(int i = 0 ; i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                int diff = capacity[i]-itemSize;
                if(diff<ans){
                    idx = i;
                }
            }
        }
        return idx;
    }
};