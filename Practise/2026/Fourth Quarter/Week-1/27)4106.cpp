#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        string m1 = "" , m2= "";
        bool valid =false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                m1+=s1[i];
                m2+=s2[i];
                valid =true;
            }else{
                if(valid){
                    ans.push_back({m1,m2});
                    m1="",m2="";
                    valid=false;
                }
            }
        }
        if(valid){
            ans.push_back({m1,m2});
        }
        return ans;
    }
};