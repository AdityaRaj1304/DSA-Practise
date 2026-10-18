#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(fruits[i]<=baskets[j]){
                    baskets[j]=-baskets[j];
                    count++;
                    break;
                }
            }
        }
        return n-count;
    }
};


class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        ll ans =0;
        vector<int>freq(1001,0);
        for(int num:skill){
            freq[num]++;
        }
        int left =0;
        int right = 1000;
        while(freq[left]==0){
            left++;
        }
        while(freq[right]==0){
            right--;
        }
        int total = left+right;
        left++,right--;
        while(left<=right){
            while(freq[left]==0){
                left++;
            }
            while(freq[right]==0){
                right--;
            }
            if(freq[left]!=freq[right]||left+right!=total){
                return -1;
            }
            ans += 2*left++*right--;
        }
        return ans;
    }
};