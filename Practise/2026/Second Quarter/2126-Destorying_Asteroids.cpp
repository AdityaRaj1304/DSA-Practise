#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long sum = mass;
        for(int num: asteroids){
            if(sum<num){
                return false;
            }else{
                sum+=num;
            }
        }
        return true;
    }
};