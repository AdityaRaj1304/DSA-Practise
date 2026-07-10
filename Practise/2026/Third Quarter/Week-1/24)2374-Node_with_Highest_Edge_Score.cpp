#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector<long long>node(n,0);
        for(int i =0;i<n;i++){
            node[edges[i]]+=i;
        }
        long long maxm = 0;
        int ans =0;
        for(int i =0;i<n;i++){
            if(node[i]>maxm){
                ans=i;
                maxm=node[i];
            }
        }
        return ans;
    }
};


class Solution {
public:
    void helper(vector<string>&words,vector<vector<string>>&ans,vector<string>&comb,vector<int>&visited){
        if(comb.size()==4){
            if(comb[0][0]==comb[1][0] && comb[0][3]==comb[2][0] && comb[3][0]==comb[1][3] && comb[3][3]==comb[2][3]){
                ans.push_back(comb);
            }
            return;
        }
        for(int i=0;i<4;i++){
            if(!visited[i]){
                visited[i]=true;
                comb.push_back(words[i]);
                helper(words,ans,comb,visited);
                comb.pop_back();
                visited[i]=false;
            }
        }
    }
    vector<vector<string>> wordSquares(vector<string>& words) {
        vector<vector<string>>ans;
        vector<string>comb;
        vector<int>visited;
        sort(words.begin(),words.end());
        helper(words,ans,comb,visited);
        return ans;
    }
};