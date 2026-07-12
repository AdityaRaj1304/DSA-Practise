#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp =arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int>rank;
        int pos = 1;
        for(int num : temp){
            if(!rank.count(num)){
                rank[num]=pos++;
            }
        }
        for(int i =0;i<arr.size();i++){
            temp[i]=rank[arr[i]];
        }
        return temp;
    }
};

