#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>in(n+1,0),out(n+1,0);
        for(auto&edge:trust){
            int u = edge[0];
            int v = edge[1];
            in[v]++;
            out[u]++;
        }
        for(int i =1;i<=n;i++){
            if(in[i]==n-1 && out[i]==0){
                return i;
            }
        }
        return -1;
    }
};


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty()){
            return 1;
        }
        unordered_map<int,int>m;
        unordered_set<int>people;
        for(auto&it:trust){
            m[it[1]]++;
            people.insert(it[0]);
        }
        for(auto&it:m){
            if(it.second==n-1){
                if(people.find(it.first)==people.end()){
                    return it.first;
                }else{
                    return -1;
                }
            }
        }
        return -1;
    }
};

