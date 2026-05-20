#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool p1 = true , p2 =false;
        int s1 = 0, s2=0;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i]%2!=0){
                swap(p1,p2);
            }
            if((i+1)%6==0){
                swap(p1,p2);
            }
            if(p1){
                s1+=nums[i];
            }else{
                s2+=nums[i];
            }
        }
        return s1-s2;
    }
};