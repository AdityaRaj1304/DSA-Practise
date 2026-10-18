#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class BusBooking {
    vector<vector<bool>>seats;
    vector<vector<int>>costs;
    int total = 0;
    int count = 0;
public:
    BusBooking(int n) {
        seats.assign(n + 1, vector<bool>(4, false));
        costs.assign(n + 1, vector<int>(4,0));
    }
    
    void toggle(string seat) {
        int r = stoi(seat.substr(1,seat.size()-1));
        int c = seat[0]-'A';
        if(!seats[r][c]){
            seats[r][c]=true;
            count++;
            int curr = 1;
            if(c==0&&seats[r][1]){
                curr=3;
            }else if(c==3 && seats[r][2]){
                curr=3;
            }
            costs[r][c]=curr;
            total+=curr;
        }else{
            seats[r][c]=false;
            count--;
            total-=costs[r][c];
            costs[r][c]=0;
        }
    }
    
    int getTotalTime() {
        return total;
    }
    
    int getMinTime() {
        return count;
    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */