#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int maxm = *max_element(arr1.begin(),arr1.end());
        vector<int>count(maxm+1,0);
        for(int num:arr1){
            count[num]++;
        }
        vector<int>ans;
        for(int num:arr2){
            while(count[num]>0){
                ans.push_back(num);
                count[num]--;
            }
        }
        for(int i=0;i<=maxm;i++){
            while(count[i]>0){
                ans.push_back(i);
                count[i]--;
            }
        }
        return ans;
    }
};

