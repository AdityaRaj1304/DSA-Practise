#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[((num%k)+k)%k]++;
        }
        if(freq[0]%2!=0){
            return false;
        }
        int left = 1 , right=k-1;
        while(left<=right){
            if(left==right){
                if(freq[left]%2!=0){
                    return false;
                }
            }else{
                if(freq[left]!=freq[right]){
                    return false;
                }
            }
            left++,right--;
        }
        return true;
    }
};




