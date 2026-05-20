#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total = 0 ;
        int path1 = 0 ;
        for(int d : distance){
            total+=d;
        }
        if(start<destination){
            for(int i = start;i<destination;i++){
                path1+=distance[i];
            }
        }else{
            for(int i = destination; i<start;i++){
                path1+=distance[i];
            }
        }
        return min(path1,total-path1);
    }
};