#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k==1){
            return max(arr[0],arr[1]);
        }else if(k>arr.size()){
            return *max_element(arr.begin(),arr.end());
        }else{
            int curr =arr[0];
            int wins = 0;
            for(int i =1;i<arr.size();i++){
                if(curr>arr[i]){
                    wins++;
                    if(wins==k){
                        return curr;
                    }
                }else{
                    curr=arr[i];
                    wins=1;
                }
            }
        }
        return -1;
    }
};


