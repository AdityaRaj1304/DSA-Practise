#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int convertTime(string current, string correct) {
        int startTime = stoi(current.substr(0,2))*60+stoi(current.substr(3,2));
        int endTime =  stoi(correct.substr(0,2))*60+stoi(correct.substr(3,2));
        int diff = endTime-startTime;
        int ans = 0;
        if(diff>=60){
            ans+=diff/60;
            diff%=60;
        }
        if(diff>=15){
            ans+=diff/15;
            diff%=15;
        }
        if(diff>=5){
            ans+=diff/5;
            diff%=5;
        }
        ans+=diff;
        return ans;
    }
};