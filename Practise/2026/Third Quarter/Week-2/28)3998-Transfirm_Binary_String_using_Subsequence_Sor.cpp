#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n = s.size();
        vector<bool>ans;
        int totalZero = 0, totalOne = 0;
        vector<int>prefix;
        for(char ch:s){
            if(ch=='0'){
                totalZero++;
            }else{
                totalOne++;
            }
            prefix.push_back(totalOne);
        }
        for(string &str:strs){
            int zero=0,one=0;
            for(char ch:str){
                if(ch=='0'){
                    zero++;
                }else if(ch=='1'){
                    one++;
                }
            }
            if(zero>totalZero || one>totalOne){
                ans.push_back(false);
                continue;
            }
            int need = totalOne-one;
            int countOne=0;
            bool temp = true;
            for(int i=0;i<s.size();i++){
                if(str[i]=='1'){
                    countOne++;
                }else if(str[i]=='?'){
                    if(need>0){
                        countOne++;
                        need--;
                    }
                }
                if(countOne<prefix[i]){
                    temp=false;
                    break;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};