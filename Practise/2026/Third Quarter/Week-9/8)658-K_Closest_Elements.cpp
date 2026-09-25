#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int>ans;
        int i =0;
        int l = 0,r=0;
        if(x<=arr[0]){
            return vector<int>(arr.begin(),arr.begin()+k);
        }
        if(x > arr[n - 1]) {
            return vector<int>(arr.end() - k, arr.end());
        }
        for(int i =1;i<n;i++){
            if(arr[i]==x){
                ans.push_back(arr[i]);
                l=i-1,r=i+1;
                break;
            }else if(arr[i]>x){
                l=i-1,r=i;
                break;
            }
        }
        while(ans.size()<k){
            if(l>=0&&r<n){
                if(abs(arr[l]-x)<=abs(arr[r]-x)){
                    ans.push_back(arr[l--]);
                }else{
                    ans.push_back(arr[r++]);
                }
            }else if(l>=0){
                ans.push_back(arr[l--]);
            }else{
                ans.push_back(arr[r++]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int st = 0, end =n-k;
        while(left<right){
            int mid = st+(end-st)/2;
            if(x-arr[mid]>arr[mid+k]-x){
                st=mid+1;
            }else{
                end=mid;
            }
        }
        return vector<int>(arr.begin()+st,arr.begin()+st+k);
    }
};