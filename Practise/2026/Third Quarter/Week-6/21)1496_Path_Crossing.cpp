#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0,y=0;
        unordered_set<string>s;
        s.insert("0,0");
        for(char ch:path){
            if(ch=='N'){
                y--;
            }else if(ch=='S'){
                y++;
            }else if(ch=='E'){
                x++;
            }else{
                x--;
            }
            string curr = to_string(x)+','+to_string(y);
            if(s.find(curr)!=s.end()){
                return true;
            }
            s.insert(curr);
        }
        return false;
    }
};