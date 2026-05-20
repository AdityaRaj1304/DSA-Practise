#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(string s: words){
            string temp ;
            for(char ch:s){
                if(ch == separator){
                    if(!temp.empty()){
                        ans.push_back(temp);
                        temp.clear();
                    }
                }else{
                    temp.push_back(ch);
                }
            }
            if(!temp.empty()){
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};