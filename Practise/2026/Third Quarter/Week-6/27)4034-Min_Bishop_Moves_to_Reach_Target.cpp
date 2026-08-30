#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if (source[0] == target[0] && source[1] == target[1]) {
            return 0;
        }
        int st = (source[0]+source[1]);
        int end = (target[0]+target[1]);
        if(st%2!=end%2){
            return -1;
        }else{
            if(abs(source[0] - target[0]) == abs(source[1] - target[1])){
                return 1;
            }
        }
        return 2;
    }
};