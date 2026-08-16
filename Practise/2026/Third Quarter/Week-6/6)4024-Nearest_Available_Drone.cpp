#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minm = INT_MAX;
        int ans = -1;
        for(int i =0;i<drones.size();i++){
            int x = drones[i][0];
            int y = drones[i][1];
            int range = drones[i][2];
            int dist = abs(target[0]-x)+abs(target[1]-y);
            if(dist<=range&&dist<minm){
                ans=i;
                minm = dist;
            }
        }
        return ans;
    }
};


