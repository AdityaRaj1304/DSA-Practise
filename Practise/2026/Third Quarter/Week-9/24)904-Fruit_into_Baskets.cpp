#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution { // Hash Map - Not optimal
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int ans =0;
        unordered_map<int,int>freq;
        for(int l=0,r=0;r<n;r++){
            freq[fruits[r]]++;
            while(freq.size()>2){
                freq[fruits[l]]--;
                if(freq[fruits[l]]==0){
                    freq.erase(fruits[l]);
                }
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int ans =0;
        int f1=-1,f2=-1;
        int curr =0;
        int consecutive =0;
        for(int fruit:fruits){
            if(fruit==f2){
                curr++;
                consecutive++;
            }else if(fruit==f1){
                curr++;
                consecutive=1;
                f1=f2;
                f2=fruit;
            }else{
                ans=max(ans,curr);
                curr=consecutive+1;
                f1=f2;
                f2=fruit;
            }
        }
        return ans;
    }
};