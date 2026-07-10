#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<string>&words,vector<vector<string>>&ans,vector<string>&comb,vector<bool>&visited){
        if(comb.size()==4){
            if(comb[0][0]==comb[1][0] && comb[0][3]==comb[2][0] && comb[3][0]==comb[1][3] && comb[3][3]==comb[2][3]){
                ans.push_back(comb);
            }
            return;
        }
        for(int i=0;i<words.size();i++){
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
        int n = words.size();
        vector<vector<string>>ans;
        vector<string>comb;
        vector<bool>visited(n,false);
        sort(words.begin(),words.end());
        helper(words,ans,comb,visited);
        return ans;
    }
};


