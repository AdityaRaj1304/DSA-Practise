#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class ParkingSystem {
public:
    vector<int>type;
    ParkingSystem(int big, int medium, int small) {
        type=vector<int>(4,0);
        type[1]=big;
        type[2]=medium;
        type[3]=small;
    }
    
    bool addCar(int carType) {
        if(type[carType]>0){
            type[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */