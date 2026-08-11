#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        vector<int>lastIdx(n,0);
        int i = m-1, j=n-1;
        while(i>=0 && j>=0){
            if(word1[i]==word2[j]){
                lastIdx[j]=i;
                j--;
            }
            i--;
        }
        vector<int>ans;
        bool skip = true;
        j=0;
        for(int i =0;i<m;i++){
            if(word1[i]==word2[j]){
                ans.push_back(i);
                j++;
            }else if(skip && (j==n-1 || i<lastIdx[j+1])){
                skip=false;
                ans.push_back(i);
            }
        }
        return ans.size()==n ? ans:{};
    }
};
