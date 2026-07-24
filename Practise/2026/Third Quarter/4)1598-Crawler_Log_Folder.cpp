#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count =0;
        for(string s:logs){
            if(s=="../"){
                if(count>0){
                    count--;
                }
            }else if(s=="./"){
                continue;
            }else{
                count++;
            }
        }
        return count;
    }
};


