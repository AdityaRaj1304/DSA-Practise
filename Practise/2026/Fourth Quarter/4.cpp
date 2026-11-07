#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool repeatedStringMatch(string a, string b, int x, int y) {
        string p = "" , q="";
        for(int i =0;i<x;i++){
            p+=x;
        }
        for(int i=0;i<y;i++){
            q+=y;
        }
        if(p.find(q)!=string::npos){
            return true;
        }
        return false;
    }
};
