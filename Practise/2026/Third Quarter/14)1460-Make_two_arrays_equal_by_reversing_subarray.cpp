#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>count(1001,0);
        for(int i =0;i<arr.size();i++){
            count[target[i]]++;
            count[arr[i]]--;
        }
        for(int i =1;i<1001;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};