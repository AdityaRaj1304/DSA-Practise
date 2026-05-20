#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string temp = s1;
        if(s1==s2){
            return true;
        }
        swap(temp[0],temp[2]);
        if(temp==s2){
            return true;
        }
        temp=s1;
        swap(temp[1],temp[3]);
        if(temp==s2){
            return true;
        }
        swap(temp[0],temp[2]);
        if(temp==s2){
            return true;
        }
        return false;
    }
};