#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>freq(101,0);
        for(int num:nums){
            freq[num]++;
        }
        for(int i =k;i<=100;i+=k){
            if(freq[i]==0){
                return i;
            }
        }
        int ans = k;
        while(ans<=100){
            ans+=k;
        }
        return ans;
    }
};


class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>s;
        for(int num:nums){
            s.insert(num/k);
        }
        for(int i=1;i<=100;i++){
            if(s.find(i*k)==s.end()){
                return i*k;
            }
        }
        return 0;
    }
};



class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "{";
        int l = 0;
        int count = 0;
        int size = INT_MAX;
        for (int r = 0; r < n; r++) {
            if (s[r] == '1') {
                count++;
            }
            while (count > k) {
                if (s[l] == '1') {
                    count--;
                }
                l++;
            }
            if (count == k) {
                while (s[l] == '0') {
                    l++;
                }
                if (r - l + 1 < size) {
                    size=r-l+1;
                    string curr = s.substr(l, r - l + 1);
                }else if(r - l + 1 == size){
                    string curr = s.substr(l, r - l + 1);
                    if (curr < ans) {
                        ans = curr;
                    }
                }
            }
        }
        return ans;
    }
};