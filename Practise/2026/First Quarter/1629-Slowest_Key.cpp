#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int idx = 0;
        int slow = releaseTimes[0];
        for(int i =1 ;i<releaseTimes.size();i++){
            int time = releaseTimes[i]-releaseTimes[i-1];
            if(time>slow){
                idx=i;
                slow=time;
            }else if(time==slow){
                if(keysPressed[i]>keysPressed[idx]){
                    idx=i;
                }
            }
        }
        return keysPressed[idx];
    }
};