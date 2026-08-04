#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        for(int i =1;i<n;i++){
            if(((s[i]-'a')%2==(s[i-1]-'a')%2)&&s[i]<s[i-1]){
                swap(s[i],s[i-1]);
                return s;
            }
        }
        return s;
    }
};


