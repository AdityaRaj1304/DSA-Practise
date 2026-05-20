#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int num = 0;
        vector<int>temp;
        for(char ch:s){
            if(ch>='0' && ch<='9'){
                num=num*10+(ch-'0');
            }else{
                if(num!=0){
                    temp.push_back(num);
                    num=0;
                }
            }
        }
        if(num!=0){
            temp.push_back(num);
        }
        for(int i =1;i<temp.size();i++){
            if(temp[i]<=temp[i-1]){
                return false;
            }
        }
        return true;
    }
};