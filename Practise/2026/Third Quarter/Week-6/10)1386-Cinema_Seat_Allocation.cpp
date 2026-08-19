#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,vector<int>>mp;
        for(auto seats:reservedSeats){
            mp[seats[0]].push_back(seats[1]);
        }
        int ans =(n-mp.size())*2;
        for(auto&it:mp){
            bool first = true , second = true, third = true;
            for(auto seat:it.second){
                if(seat>=2&&seat<=5){
                    first=false;
                }
                if(seat>=4&&seat<=7){
                    second=false;
                }
                if(seat>=6&&seat<=9){
                    third=false;
                }
            }
            if(first&&third){
                ans+=2;
            }else if(first||second||third){
                ans+=1;
            }
        }
        return ans;
    }
};