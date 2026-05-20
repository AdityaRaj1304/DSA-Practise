#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans = 0;
        vector<int>points;
        for(string s:operations){
            int val=0;
            if(s=="+"){
                val=points[points.size()-1]+points[points.size()-2];
                points.push_back(val);
            }else if(s=="C"){
                points.pop_back();
            }else if(s=="D"){
                val=2*(points[points.size()-1]);
                points.push_back(val);
            }else{
                points.push_back(stoi(s));
            }
        }
        for(int num :points){
            ans+=num;
        }
        return ans;
    }
};