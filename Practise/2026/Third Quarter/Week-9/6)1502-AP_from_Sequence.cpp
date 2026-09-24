#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int diff= arr[1]-arr[0];
        for(int i=2;i<n;i++){
            if((arr[i]-arr[i-1])!=diff){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int maxm = *max_element(arr.begin(),arr.end());
        int minm = *min_element(arr.begin(),arr.end());
        int diff = (maxm-minm)/(n-1);
        if(minm+diff*(n-1)!=maxm){
            return false;
        }
        unordered_set<int>s(arr.begin(),arr.end());
        for(int i =1;i<n;i++){
            if(s.find(minm+i*diff)==s.end()){
                return false;
            }
        }
        return true;
    }
};
