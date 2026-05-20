#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines =1 ;
        int sum = 0;
        for(char ch:s){
            sum+=widths[ch-'a'];
            if(sum>100){
                lines++;
                sum = widths[ch-'a'];
            }
        }
        return{lines,sum};
    }
};