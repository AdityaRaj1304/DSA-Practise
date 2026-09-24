#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution { //O(n)
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>even(101,0),odd(101,0);
        for(int i=0;i<n;i++){
            if(i%2==0){
                even[nums[i]]++;
            }else{
                odd[nums[i]]++;
            }
        }
        int e=0,o=100;
        for(int i =0;i<n;i++){
            if(i%2==0){
                while(!even[e]){
                    e++;
                }
                nums[i]=e;
                even[e]--;
            }else{
                while(!odd[o]){
                    o--;
                }
                nums[i]=o;
                odd[o]--;
            }
        }
        return nums;
    }
};

class Solution { //O(nlogn)
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd,even;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(i%2){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int m = even.size(),n=odd.size();
        int i =0,j=0;
        while(true){
            if(i<m){
                ans.push_back(even[i++]);
            }
            if(j<n){
                ans.push_back(odd[j++]);
            }
            if(i==m&&j==n){
                return ans;
            }
        }
        return {};
    }
};

