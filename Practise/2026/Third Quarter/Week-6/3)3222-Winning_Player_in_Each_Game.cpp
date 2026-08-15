#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    string winningPlayer(int x, int y) {
        int count =0;
        while(x>0&&y>3){
            count++;
            x--;
            y-=4;
        }
        return count%2==0 ? "Bob": "Alice";
    }
};

